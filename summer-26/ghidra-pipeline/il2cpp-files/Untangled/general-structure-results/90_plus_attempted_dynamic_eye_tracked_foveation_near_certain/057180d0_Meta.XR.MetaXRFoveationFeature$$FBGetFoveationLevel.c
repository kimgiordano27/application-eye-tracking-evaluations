/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBGetFoveationLevel
ENTRY_POINT: 057180d0
PROGRAM: Untangled-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_foveation_hits_12;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


long * Meta_XR_MetaXRFoveationFeature__FBGetFoveationLevel(void)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long unaff_x20;
  long *unaff_x21;
  uint uVar11;
  
  FUN_02f07e70();
  FUN_02f07e70(PTR_DAT_06d02220);
  FUN_02f07e70(PTR_DAT_06d01eb0);
  FUN_02f07e70(PTR_DAT_06d58040);
  FUN_02f07e70(PTR_DAT_06d58048);
  *(undefined1 *)(unaff_x20 + 0x800) = 1;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar5 = FUN_056ee14c();
  puVar4 = PTR_DAT_06d58040;
  if (lVar5 == 0) {
Meta_XR_MetaXRFoveationFeature__FBGetFoveationDynamic:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar1 = *(uint *)(lVar5 + 0x18);
  if (0 < (int)uVar1) {
    uVar11 = 0;
    do {
      if (uVar1 <= uVar11) {
LAB_057182d8:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar10 = *(long *)(lVar5 + (long)(int)uVar11 * 8 + 0x20);
      if ((lVar10 == 0) || (plVar6 = (long *)thunk_FUN_02ebbee0(lVar10,0), plVar6 == (long *)0x0))
      goto Meta_XR_MetaXRFoveationFeature__FBGetFoveationDynamic;
      uVar7 = (**(code **)(*plVar6 + 0x2d8))(plVar6,*(undefined8 *)(*plVar6 + 0x2e0));
      uVar8 = FUN_05464bbc(uVar7,*(undefined8 *)puVar4,4,0);
      puVar3 = PTR_DAT_06d37b88;
      if ((uVar8 & 1) != 0) {
        lVar5 = *(long *)PTR_DAT_06d37b88;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar5 = *(long *)puVar3;
        }
        if (*(long *)(*(long *)(lVar5 + 0xb8) + 0x18) == 0) {
          lVar5 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,1);
          if (lVar5 == 0) goto Meta_XR_MetaXRFoveationFeature__FBGetFoveationDynamic;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_057182d8;
          *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_06d58048;
          thunk_FUN_02f411dc();
          uVar7 = FUN_056ebd04(plVar6,lVar5,0);
          lVar5 = *(long *)puVar3;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_02f12b58(lVar5);
            lVar5 = *(long *)puVar3;
          }
          puVar9 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
          *puVar9 = uVar7;
          thunk_FUN_02f411dc(puVar9,uVar7);
          lVar5 = *(long *)puVar3;
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar5 = *(long *)puVar3;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
        if (lVar5 != 0) {
          plVar6 = (long *)FUN_056ebaa0(lVar5,lVar10,*(undefined8 *)PTR_DAT_06d58048,0);
          if (plVar6 == (long *)0x0) {
            return (long *)0x0;
          }
          bVar2 = *(byte *)(*(long *)PTR_DAT_06d01eb0 + 0x130);
          if ((bVar2 <= *(byte *)(*plVar6 + 0x130)) &&
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) ==
              *(long *)PTR_DAT_06d01eb0)) {
            return plVar6;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02f08440();
        }
        goto Meta_XR_MetaXRFoveationFeature__FBGetFoveationDynamic;
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)uVar1);
  }
  return (long *)0x0;
}


