/*
FUNCTION_NAME: FUN_026dc8e4
ENTRY_POINT: 026dc8e4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 135
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x026dcfd4) */
/* WARNING: Removing unreachable block (ram,0x026dcc4c) */
/* WARNING: Removing unreachable block (ram,0x026dccd4) */
/* WARNING: Removing unreachable block (ram,0x026dd114) */
/* WARNING: Removing unreachable block (ram,0x026dd10c) */

void FUN_026dc8e4(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_fc;
  float local_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 local_e8;
  long lStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  
  if ((DAT_04830190 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetupSettings>b__8_0__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetupSettings>b__8_1__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetupSettings>b__8_2__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector3_<SetWidget>b__7_0__);
    DAT_04830190 = 1;
  }
  local_80 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  uStack_90 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  lStack_b8 = 0;
  local_c0 = 0;
  plVar19 = (long *)(param_3 + 0x20);
  if ((*(byte *)(*(long *)(*(long *)(*plVar19 + 0xc0) + 400) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  lVar8 = thunk_FUN_01f117cc();
  FUN_03067e5c(lVar8,*(undefined8 *)(*(long *)(*plVar19 + 0xc0) + 0x198));
  puVar7 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetupSettings>b__8_1__;
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (param_1[2] != 0) {
    FUN_02b0758c(&local_f8,param_1[2],*(undefined8 *)(*(long *)(*plVar19 + 0xc0) + 0x90));
    local_a0 = CONCAT44(uStack_f4,local_f8);
    uStack_98 = uStack_f0;
    local_88 = lStack_e0;
    uStack_90 = local_e8;
    local_80 = local_d8;
    while (uVar9 = FUN_02cd6e60(&local_a0,*(undefined8 *)(*(long *)(*plVar19 + 0xc0) + 0x100)),
          puVar6 = Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__,
          puVar5 = 
          Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
          , (uVar9 & 1) != 0) {
      if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar10 = (long *)FUN_0271ca88(local_88,*(undefined8 *)(*(long *)(*plVar19 + 0xc0) + 200));
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_026dca5c:
      lVar15 = *plVar10;
      uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_026dcaa8;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,0);
LAB_026dcaa8:
      uVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if ((uVar9 & 1) != 0) {
        lVar15 = *(long *)(*(long *)(*plVar19 + 0xc0) + 0xd0);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01ecaf44(lVar15);
        }
        lVar16 = *plVar10;
        uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar15) {
              puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_026dcb20;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar15,0);
LAB_026dcb20:
        (*(code *)*puVar11)(&local_f8,plVar10,puVar11[1]);
        uVar12 = uStack_f0;
        local_b0 = 0;
        local_a8 = 0;
        local_b0 = (**(code **)(*param_1 + 0x1c8))
                             (param_1,uStack_f0,*(undefined8 *)(*param_1 + 0x1d0));
        thunk_FUN_01f51358(&local_b0);
        local_a8 = (**(code **)(*param_1 + 0x1d8))(param_1,uVar12,*(undefined8 *)(*param_1 + 0x1e0))
        ;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar15 = *(long *)(lVar8 + 0x10);
        lVar16 = *(long *)(*(long *)(*plVar19 + 0xc0) + 0x1b0);
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
          lVar15 = lVar15 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          puVar11 = (undefined8 *)(lVar15 + 0x20);
          *puVar11 = local_b0;
          *(undefined8 *)(lVar15 + 0x28) = local_a8;
          thunk_FUN_01f51358(puVar11,0);
        }
        else {
          FUN_030686dc(lVar8,local_b0,local_a8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_026dca5c;
      }
      if (plVar10 != (long *)0x0) {
        lVar15 = *plVar10;
        uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_026dcc3c;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_026dcc3c:
        (*(code *)*puVar11)(plVar10,puVar11[1]);
      }
    }
    FUN_02cd6f84(&local_a0,*(undefined8 *)(*(long *)(*plVar19 + 0xc0) + 0x108));
    uVar12 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
    uVar12 = FUN_0340ebc0(*(undefined8 *)
                           Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetupSettings>b__8_0__
                          ,uVar12,*(undefined8 *)
                                   Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetupSettings>b__8_2__
                          ,0);
    lVar16 = *(long *)puVar6;
    lVar15 = *(long *)(lVar16 + 0x38);
    if (lVar15 == 0) {
      FUN_01ecafa0(lVar16);
      lVar15 = *(long *)(lVar16 + 0x38);
    }
    lVar15 = *(long *)(lVar15 + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_01ecaf44();
    }
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar15 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_01ecaf44();
    }
    if (param_2 != 0) {
      FUN_03cdf9c4(param_2,uVar12,**(undefined8 **)(lVar15 + 0xb8),0);
      lVar15 = *(long *)(*(long *)(*plVar19 + 0xc0) + 0x1c8);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_01ecaf44();
      }
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar15 = *(long *)(*(long *)(*plVar19 + 0xc0) + 0x1c8);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_01ecaf44();
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
      if (lVar15 == 0) {
        lVar15 = *(long *)(*(long *)(*plVar19 + 0xc0) + 0x1c8);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01ecaf44();
        }
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar16 = *(long *)(*plVar19 + 0xc0);
        lVar15 = *(long *)(lVar16 + 0x1c8);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01ecaf44();
          lVar16 = *(long *)(*plVar19 + 0xc0);
        }
        lVar16 = *(long *)(lVar16 + 0x1c0);
        uVar12 = **(undefined8 **)(lVar15 + 0xb8);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_01ecaf44(lVar16);
        }
        lVar15 = thunk_FUN_01f117cc(lVar16);
        FUN_02a45d74(lVar15,uVar12,*(undefined8 *)(*(long *)(*plVar19 + 0xc0) + 0x1d0),
                     *(undefined8 *)(*(long *)(*plVar19 + 0xc0) + 0x1d8));
        lVar17 = *(long *)(*plVar19 + 0xc0);
        lVar16 = *(long *)(lVar17 + 0x1c8);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_01ecaf44();
          lVar17 = *(long *)(*plVar19 + 0xc0);
        }
        *(long *)(*(long *)(lVar16 + 0xb8) + 8) = lVar15;
        lVar16 = *(long *)(lVar17 + 0x1c8);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_01ecaf44();
        }
        thunk_FUN_01f51358(*(long *)(lVar16 + 0xb8) + 8,lVar15);
      }
      if (lVar8 != 0) {
        FUN_0306a140(lVar8,lVar15,*(undefined8 *)(*(long *)(*plVar19 + 0xc0) + 0x1e0));
        FUN_03069150(&local_f8,lVar8,*(undefined8 *)(*(long *)(*plVar19 + 0xc0) + 0x1e8));
        fVar20 = 0.0;
        fVar22 = 0.0;
        uStack_c8 = uStack_f0;
        lStack_b8 = lStack_e0;
        local_c0 = local_e8;
        while (uVar9 = FUN_02c687dc(&local_d0,*(undefined8 *)(*(long *)(*plVar19 + 0xc0) + 0x208)),
              uVar12 = local_c0, (uVar9 & 1) != 0) {
          fVar21 = (float)lStack_b8;
          fVar22 = fVar22 + fVar21 * 9.536743e-07;
          local_f8 = fVar20;
          uVar13 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_f8);
          local_fc = fVar21 * 9.536743e-07;
          uVar14 = thunk_FUN_01f113fc(*(undefined8 *)puVar5,&local_fc);
          uVar12 = FUN_0340f334(*(undefined8 *)puVar7,uVar13,uVar14,uVar12,0);
          lVar15 = *(long *)puVar6;
          lVar8 = *(long *)(lVar15 + 0x38);
          if (lVar8 == 0) {
            FUN_01ecafa0(lVar15);
            lVar8 = *(long *)(lVar15 + 0x38);
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01ecaf44();
          }
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar8 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01ecaf44();
          }
          FUN_03cdf9c4(param_2,uVar12,**(undefined8 **)(lVar8 + 0xb8),0);
          fVar20 = (float)((int)fVar20 + 1);
        }
        FUN_02c687d8(&local_d0,*(undefined8 *)(*(long *)(*plVar19 + 0xc0) + 0x210));
        local_f8 = fVar22;
        uVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar5,&local_f8);
        uVar12 = FUN_03406290(*(undefined8 *)
                               Method_UnityEngine_Rendering_UI_DebugUIHandlerVector3_<SetWidget>b__7_0__
                              ,uVar12,0);
        lVar15 = *(long *)puVar6;
        lVar8 = *(long *)(lVar15 + 0x38);
        if (lVar8 == 0) {
          FUN_01ecafa0(lVar15);
          lVar8 = *(long *)(lVar15 + 0x38);
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01ecaf44();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar8 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01ecaf44();
        }
        FUN_03cdf9c4(param_2,uVar12,**(undefined8 **)(lVar8 + 0xb8),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


