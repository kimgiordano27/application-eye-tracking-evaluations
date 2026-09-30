/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 036d8114
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(long param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long in_x9;
  long unaff_x19;
  long *unaff_x20;
  int iVar15;
  long lVar16;
  
  if (in_x9 == param_1) {
    uVar5 = FUN_036f2cf8();
    lVar9 = (**(code **)(*unaff_x20 + 0x238))();
    puVar4 = PTR_DAT_06d98c30;
    puVar3 = PTR_DAT_06d92be8;
    if (lVar9 != 0) {
      uVar6 = FUN_03f054bc(lVar9,0);
      lVar14 = *(long *)puVar4;
      lVar9 = unaff_x20[10];
      lVar10 = unaff_x20[0xb];
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_016466fc(lVar14);
        lVar14 = *(long *)puVar4;
      }
      uVar7 = FUN_0371033c(lVar9,lVar10,**(undefined8 **)(lVar14 + 0xb8),
                           (*(undefined8 **)(lVar14 + 0xb8))[1],0);
      lVar9 = thunk_FUN_015d056c(*(undefined8 *)puVar3);
      if (lVar9 != 0) {
        FUN_01c95704(lVar9,uVar5,uVar6,uVar7 & 1,0);
        lVar10 = (**(code **)(*unaff_x20 + 0x238))();
        puVar3 = PTR_DAT_06e69590;
        if (lVar10 != 0) {
          iVar15 = 0;
          do {
            iVar8 = FUN_03f054bc(lVar10,0);
            if (iVar8 <= iVar15) {
              return lVar9;
            }
            plVar11 = (long *)(**(code **)(*unaff_x20 + 0x238))();
            if ((plVar11 == (long *)0x0) ||
               (plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                            (plVar11,iVar15,*(undefined8 *)(*plVar11 + 0x310)),
               plVar11 == (long *)0x0)) break;
            bVar2 = *(byte *)(*(long *)puVar3 + 300);
            if ((*(byte *)(*plVar11 + 300) < bVar2) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
              FUN_0160f170(plVar11);
            }
            lVar12 = *(long *)puVar4;
            lVar16 = plVar11[0x18];
            lVar10 = plVar11[10];
            lVar14 = plVar11[0xb];
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar12 = *(long *)puVar4;
            }
            uVar7 = FUN_0371033c(lVar10,lVar14,**(undefined8 **)(lVar12 + 0xb8),
                                 (*(undefined8 **)(lVar12 + 0xb8))[1],0);
            uVar13 = FUN_01c95838(lVar9,lVar16,plVar11,uVar7 & 1,0);
            if ((uVar13 & 1) == 0) {
              plVar11 = (long *)plVar11[0x18];
              if (plVar11 == (long *)0x0) break;
              (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
              FUN_01fbaf30();
            }
            iVar15 = iVar15 + 1;
            lVar10 = (**(code **)(*unaff_x20 + 0x238))();
          } while (lVar10 != 0);
        }
      }
    }
  }
  else {
    uVar5 = FUN_036f2cf8();
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      cVar1 = *(char *)(*(long *)(unaff_x19 + 0x28) + 0x10);
      lVar9 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e13ab0);
      if (lVar9 != 0) {
        FUN_01fc21b8(lVar9,uVar5,cVar1 != '\0',0);
        FUN_01fc22f4(lVar9,0);
        FUN_036dd7e0();
        FUN_036f2e20();
        lVar9 = FUN_01fc2d64(lVar9,1,0);
        return lVar9;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


