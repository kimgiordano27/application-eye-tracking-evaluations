/*
FUNCTION_NAME: FUN_025bac74
ENTRY_POINT: 025bac74
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_025bac74(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_037830bc & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<Hand>__ctor__);
    thunk_FUN_00d48444(StringLiteral_13003);
    thunk_FUN_00d48444(System_Func<KeyValuePair<int,_int>,_KeyValuePair<int,_int>>_TypeInfo);
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<AnimationCurve>__ctor__);
    thunk_FUN_00d48444(StringLiteral_9812);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<TrackAsset>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IMoveHandler>__);
    thunk_FUN_00d48444(PTR_DAT_033f2098);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<GameObject>__ctor__);
    thunk_FUN_00d48444(StringLiteral_15);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtnq_u32_f32__);
    thunk_FUN_00d48444(UnityEngine_UI_FontUpdateTracker_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_TypeInfo);
    DAT_037830bc = 1;
  }
  puVar1 = Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IMoveHandler>__;
  uStack_58 = 0;
  local_50 = 0;
  local_60 = 0;
  if (param_2 != (long *)0x0) {
    lVar7 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IMoveHandler>__) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_025bada8;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_00d59724(param_2,*(long *)
                                   Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IMoveHandler>__
                          ,2);
LAB_025bada8:
    lVar7 = (*(code *)*puVar5)(param_2,puVar5[1]);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) == 0) {
        return;
      }
      lVar7 = param_1[0x15];
      if (lVar7 != 0) {
        lVar9 = *(long *)Method_System_Collections_Generic_List<GameObject>__ctor__;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        uVar8 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
        if ((uVar8 & 1) == 0) {
          *(undefined4 *)(lVar7 + 0x18) = 0;
        }
        else {
          iVar11 = *(int *)(lVar7 + 0x18);
          *(undefined4 *)(lVar7 + 0x18) = 0;
          if (0 < iVar11) {
            FUN_0179519c(*(undefined8 *)(lVar7 + 0x10),0,iVar11,0);
          }
        }
        lVar7 = *param_2;
        lVar9 = param_1[0x15];
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_025bae70;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar1,2);
LAB_025bae70:
        uVar6 = (*(code *)*puVar5)(param_2,puVar5[1]);
        if (lVar9 != 0) {
          FUN_01322050(lVar9,uVar6,*(undefined8 *)PTR_DAT_033f2098);
          if ((param_1[0x19] != 0) &&
             (FUN_012ddc8c(param_1[0x19],*(undefined8 *)StringLiteral_9812),
             puVar4 = StringLiteral_13003,
             puVar3 = Method_FullSerializer_fsDirectConverter<AnimationCurve>__ctor__,
             puVar2 = Method_UnityEngine_Events_UnityEvent<Hand>__ctor__,
             puVar1 = System_Func<KeyValuePair<int,_int>,_KeyValuePair<int,_int>>_TypeInfo,
             param_3 != 0)) {
            if (0 < *(int *)(param_3 + 0x18)) {
              FUN_01323390(param_3,&local_78,*(undefined8 *)StringLiteral_15);
              uStack_58 = uStack_70;
              local_60 = local_78;
              local_50 = local_68;
              while (uVar8 = FUN_012b894c(&local_60,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
                uVar6 = FUN_00cc5764(&local_60,*(undefined8 *)puVar1);
                if (param_1[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c(0,uVar6);
                }
                FUN_012df150(param_1[0x19],uVar6,*(undefined8 *)puVar3);
              }
              FUN_012b8948(&local_60,*(undefined8 *)puVar2);
            }
            puVar2 = UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_TypeInfo;
            puVar1 = System_Collections_Generic_IEnumerator<TrackAsset>_TypeInfo;
            lVar7 = param_1[0x15];
            if (lVar7 != 0) {
              iVar11 = *(int *)(lVar7 + 0x18) + -1;
              if (iVar11 < 0) {
                return;
              }
              do {
                FUN_0132138c(lVar7,iVar11,&local_78,*(undefined8 *)puVar2);
                uVar6 = local_78;
                uVar8 = (**(code **)(*param_1 + 0x228))
                                  (param_1,param_2,local_78,*(undefined8 *)(*param_1 + 0x230));
                if ((uVar8 & 1) == 0) {
LAB_025bafbc:
                  FUN_025bb06c(param_1,param_2,uVar6);
                }
                else {
                  if (param_1[0x19] == 0) break;
                  uVar8 = FUN_012ddcec(param_1[0x19],uVar6,*(undefined8 *)puVar1);
                  if ((uVar8 & 1) == 0) goto LAB_025bafbc;
                }
                iVar11 = iVar11 + -1;
                if (iVar11 < 0) {
                  return;
                }
                lVar7 = param_1[0x15];
              } while (lVar7 != 0);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


