/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 036d9e8c
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Dispose(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *unaff_x19;
  ulong unaff_x21;
  
  lVar6 = (**(code **)(param_1 + 0x238))(param_2,*(undefined8 *)(param_1 + 0x240));
  puVar2 = PTR_DAT_06e5dc58;
  if (lVar6 != 0) {
    iVar4 = FUN_03f054bc(lVar6,0);
    plVar7 = unaff_x19;
    if (iVar4 < 1) {
LAB_036da01c:
      lVar6 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
      if (lVar6 != 0) {
        iVar4 = FUN_03f054bc(lVar6,0);
        if (iVar4 != 0) {
          if ((unaff_x21 & 1) != 0) {
            return plVar7;
          }
          FUN_01fbafc0();
        }
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar6 = *(long *)puVar2;
        }
        return (long *)**(undefined8 **)(lVar6 + 0xb8);
      }
    }
    else {
      plVar7 = (long *)thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06de6fb8);
      if (plVar7 != (long *)0x0) {
        FUN_036efd90(plVar7,0);
        FUN_03fbbd88(plVar7,unaff_x19[10],unaff_x19[0xb],0);
        uVar8 = FUN_03fbbec4(plVar7,unaff_x19[0xc],unaff_x19[0xd],0);
        FUN_036dac4c(uVar8,plVar7);
        lVar6 = (**(code **)(*unaff_x19 + 0x238))();
        puVar3 = PTR_DAT_06e69590;
        if (lVar6 != 0) {
          iVar4 = 0;
          do {
            iVar5 = FUN_03f054bc(lVar6,0);
            if (iVar5 <= iVar4) goto LAB_036da01c;
            plVar9 = (long *)(**(code **)(*unaff_x19 + 0x238))();
            if (plVar9 == (long *)0x0) break;
            plVar9 = (long *)(**(code **)(*plVar9 + 0x308))
                                       (plVar9,iVar4,*(undefined8 *)(*plVar9 + 0x310));
            if (plVar9 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)puVar3 + 300);
              if ((*(byte *)(*plVar9 + 300) < bVar1) ||
                 (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
                FUN_0160f170(plVar9);
              }
            }
            lVar6 = FUN_036d4778();
            lVar10 = *(long *)puVar2;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_016466fc(lVar10);
              lVar10 = *(long *)puVar2;
            }
            if (lVar6 != **(long **)(lVar10 + 0xb8)) {
              lVar10 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
              if (lVar10 == 0) break;
              FUN_036ef950(lVar10,lVar6,0);
            }
            iVar4 = iVar4 + 1;
            lVar6 = (**(code **)(*unaff_x19 + 0x238))();
          } while (lVar6 != 0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


