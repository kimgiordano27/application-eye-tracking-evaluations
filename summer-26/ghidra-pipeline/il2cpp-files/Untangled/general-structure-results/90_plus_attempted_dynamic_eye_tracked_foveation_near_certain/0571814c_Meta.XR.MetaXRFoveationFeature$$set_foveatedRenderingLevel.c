/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_foveatedRenderingLevel
ENTRY_POINT: 0571814c
PROGRAM: Untangled-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_foveation_hits_10;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


long * Meta_XR_MetaXRFoveationFeature__set_foveatedRenderingLevel(void)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint in_w8;
  long lVar8;
  long unaff_x21;
  uint uVar9;
  undefined8 *unaff_x23;
  
  uVar9 = 0;
  do {
    if (in_w8 <= uVar9) {
LAB_057182d8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar8 = *(long *)(unaff_x21 + (long)(int)uVar9 * 8 + 0x20);
    if ((lVar8 == 0) || (plVar3 = (long *)thunk_FUN_02ebbee0(lVar8,0), plVar3 == (long *)0x0)) {
Meta_XR_MetaXRFoveationFeature__FBGetFoveationDynamic:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar4 = (**(code **)(*plVar3 + 0x2d8))(plVar3,*(undefined8 *)(*plVar3 + 0x2e0));
    uVar5 = FUN_05464bbc(uVar4,*unaff_x23,4,0);
    puVar2 = PTR_DAT_06d37b88;
    if ((uVar5 & 1) != 0) {
      lVar6 = *(long *)PTR_DAT_06d37b88;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar2;
      }
      if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x18) == 0) {
        lVar6 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,1);
        if (lVar6 == 0) goto Meta_XR_MetaXRFoveationFeature__FBGetFoveationDynamic;
        if (*(int *)(lVar6 + 0x18) == 0) goto LAB_057182d8;
        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_06d58048;
        thunk_FUN_02f411dc();
        uVar4 = FUN_056ebd04(plVar3,lVar6,0);
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_02f12b58(lVar6);
          lVar6 = *(long *)puVar2;
        }
        puVar7 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18);
        *puVar7 = uVar4;
        thunk_FUN_02f411dc(puVar7,uVar4);
        lVar6 = *(long *)puVar2;
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
      if (lVar6 != 0) {
        plVar3 = (long *)FUN_056ebaa0(lVar6,lVar8,*(undefined8 *)PTR_DAT_06d58048,0);
        if (plVar3 == (long *)0x0) {
          return (long *)0x0;
        }
        bVar1 = *(byte *)(*(long *)PTR_DAT_06d01eb0 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06d01eb0
           )) {
          return plVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f08440();
      }
      goto Meta_XR_MetaXRFoveationFeature__FBGetFoveationDynamic;
    }
    in_w8 = *(uint *)(unaff_x21 + 0x18);
    uVar9 = uVar9 + 1;
    if ((int)in_w8 <= (int)uVar9) {
      return (long *)0x0;
    }
  } while( true );
}


