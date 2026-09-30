/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 036d8260
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(undefined4 param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  undefined4 unaff_w21;
  int iVar11;
  long lVar12;
  undefined8 *unaff_x25;
  long *unaff_x27;
  
  lVar10 = *unaff_x27;
  lVar5 = unaff_x20[10];
  lVar6 = unaff_x20[0xb];
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_016466fc(lVar10);
    lVar10 = *unaff_x27;
  }
  uVar3 = FUN_0371033c(lVar5,lVar6,**(undefined8 **)(lVar10 + 0xb8),
                       (*(undefined8 **)(lVar10 + 0xb8))[1],0);
  lVar5 = thunk_FUN_015d056c(*unaff_x25);
  if (lVar5 != 0) {
    FUN_01c95704(lVar5,unaff_w21,param_1,uVar3 & 1,0);
    lVar6 = (**(code **)(*unaff_x20 + 0x238))();
    puVar2 = PTR_DAT_06e69590;
    if (lVar6 != 0) {
      iVar11 = 0;
      do {
        iVar4 = FUN_03f054bc(lVar6,0);
        if (iVar4 <= iVar11) {
          return lVar5;
        }
        plVar7 = (long *)(**(code **)(*unaff_x20 + 0x238))();
        if (plVar7 == (long *)0x0) break;
        plVar7 = (long *)(**(code **)(*plVar7 + 0x308))
                                   (plVar7,iVar11,*(undefined8 *)(*plVar7 + 0x310));
        if (plVar7 == (long *)0x0) break;
        bVar1 = *(byte *)(*(long *)puVar2 + 300);
        if ((*(byte *)(*plVar7 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(plVar7);
        }
        lVar8 = *unaff_x27;
        lVar12 = plVar7[0x18];
        lVar6 = plVar7[10];
        lVar10 = plVar7[0xb];
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar8 = *unaff_x27;
        }
        uVar3 = FUN_0371033c(lVar6,lVar10,**(undefined8 **)(lVar8 + 0xb8),
                             (*(undefined8 **)(lVar8 + 0xb8))[1],0);
        uVar9 = FUN_01c95838(lVar5,lVar12,plVar7,uVar3 & 1,0);
        if ((uVar9 & 1) == 0) {
          plVar7 = (long *)plVar7[0x18];
          if (plVar7 == (long *)0x0) break;
          (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          FUN_01fbaf30();
        }
        iVar11 = iVar11 + 1;
        lVar6 = (**(code **)(*unaff_x20 + 0x238))();
      } while (lVar6 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


