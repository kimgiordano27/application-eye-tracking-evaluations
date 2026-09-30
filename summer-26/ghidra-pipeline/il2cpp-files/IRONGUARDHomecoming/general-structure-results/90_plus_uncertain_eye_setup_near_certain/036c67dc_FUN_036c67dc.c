/*
FUNCTION_NAME: FUN_036c67dc
ENTRY_POINT: 036c67dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_036c67dc(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  float local_48;
  undefined8 local_40;
  float local_38;
  long local_28;
  
  if ((DAT_048341c1 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_41__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                      );
    DAT_048341c1 = 1;
  }
  puVar1 = Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__;
  local_28 = 0;
  local_38 = 0.0;
  local_40 = 0;
  local_48 = 0.0;
  local_50 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_78 = 0;
  local_80 = 0;
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)
             Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
          goto LAB_036c68b4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(param_2,*(long *)
                                   Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__
                          ,0xd);
LAB_036c68b4:
    (*(code *)*puVar3)(param_2,&local_28,puVar3[1]);
    if (local_28 != 0) {
      iVar2 = OVRPlugin_OVRP_1_76_0__ovrp_GetNodePoseStateAtTime(local_28,0);
      if (0 < iVar2) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_036c6b1c;
        FUN_036c59fc(*(long *)(param_1 + 0x18),local_28);
        if (DAT_0482ee1d == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          DAT_0482ee1d = '\x01';
        }
        lVar4 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                         0xb8);
        fVar10 = *(float *)(lVar4 + 0x4c);
        local_50 = *(undefined8 *)(lVar4 + 0x48);
        local_40 = *(undefined8 *)(lVar4 + 0x48);
        fVar11 = *(float *)(lVar4 + 0x50);
        local_48 = fVar11;
        local_38 = fVar11;
        if (*(long *)(param_1 + 0x20) != 0) {
          lVar5 = *param_2;
          lVar4 = *(long *)puVar1;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar4) {
                puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
                goto LAB_036c698c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ecb238(param_2,lVar4,9);
LAB_036c698c:
          uVar6 = (*(code *)*puVar3)(param_2,0,&local_70,puVar3[1]);
          if ((uVar6 & 1) != 0) {
            plVar8 = *(long **)(param_1 + 0x20);
            if (plVar8 == (long *)0x0) goto LAB_036c6b1c;
            lVar4 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) ==
                    *(long *)Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_41__) {
                  puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_036c6a00;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)
                     FUN_01ecb238(plVar8,*(long *)
                                          Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_41__
                                  ,0);
LAB_036c6a00:
            uVar6 = (*(code *)*puVar3)(plVar8,&local_90,puVar3[1]);
            if ((uVar6 & 1) != 0) {
              if (*(int *)(*(long *)
                            Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                          + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              fVar9 = (float)FUN_0407bb40(&local_70,0);
              fVar10 = -fVar10;
              fVar11 = -fVar11;
              local_40 = CONCAT44(fVar10,-fVar9);
              local_38 = fVar11;
              fVar9 = (float)FUN_0407bb40(&local_90,0);
              local_48 = -fVar11;
              local_50 = CONCAT44(-fVar10,-fVar9);
              lVar5 = *param_2;
              lVar4 = *(long *)puVar1;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == lVar4) {
                    puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_036c6ab8;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar3 = (undefined8 *)FUN_01ecb238(param_2,lVar4,0);
LAB_036c6ab8:
              iVar2 = (*(code *)*puVar3)(param_2,puVar3[1]);
              if (iVar2 == 1) {
                local_40 = CONCAT44(-(float)((ulong)local_40 >> 0x20),-(float)local_40);
                local_38 = -local_38;
              }
            }
          }
        }
        uVar6 = (ulong)*(uint *)(param_1 + 0x10);
        if (*(uint *)(param_1 + 0x10) == 0xffffffff) {
          uVar6 = FUN_036c5c30();
          *(int *)(param_1 + 0x10) = (int)uVar6;
        }
        FUN_036c5d5c(uVar6,*(undefined8 *)(param_1 + 0x18),&local_40,&local_50);
      }
      return;
    }
  }
LAB_036c6b1c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


