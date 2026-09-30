/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$SerializeMember<bool>
ENTRY_POINT: 02362218
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_FullSerializer_fsBaseConverter__SerializeMember<bool>
               (double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  undefined4 uStack_284;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  int iStack_218;
  undefined1 auStack_214 [524];
  long lStack_8;
  
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Grabbable>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<InputField>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<GrabObject>__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_GetHashCodeOfString__);
    thunk_FUN_01efb3a4(Method_System_Collections_Comparer_GetObjectData__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<InputSystemUIInputModule>__);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
  memset(&uStack_230,0,0x21c);
  puVar2 = Method_System_Globalization_CompareInfo_GetHashCodeOfString__;
  uStack_250 = 0;
  uStack_248 = 0;
  uStack_240 = 0;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(Method_System_Collections_Comparer_Compare__);
    FUN_034efd20(uVar7,uVar6,0);
  }
  else {
    uStack_280 = *(undefined8 *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    uStack_278 = uVar6;
    if (*(int *)(*(long *)Method_System_Globalization_CompareInfo_GetHashCodeOfString__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    if ((int)uVar6 == 0) {
      lVar12 = *(long *)(param_2 + 0x78);
      if (lVar12 == 0) {
LAB_023624f0:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar12 + 0xe8) != -1) {
        if (0.0 <= param_1) {
          param_1 = (double)(*(undefined8 **)
                              (*(long *)Method_UnityEngine_Component_GetComponent<GrabObject>__ +
                              0xb8))[1] + param_1;
        }
        else {
          plVar13 = (long *)**(undefined8 **)
                              (*(long *)Method_UnityEngine_Component_GetComponent<GrabObject>__ +
                              0xb8);
          if (plVar13 == (long *)0x0) goto LAB_023624f0;
          lVar9 = *plVar13;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) ==
                  *(long *)Method_UnityEngine_Component_GetComponent<Grabbable>__) {
                puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x13) * 0x10 + 0x138);
                goto LAB_02362384;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_01ecb238(plVar13,*(long *)
                                         Method_UnityEngine_Component_GetComponent<Grabbable>__,0x13
                               );
LAB_02362384:
          param_1 = (double)(*(code *)*puVar5)(plVar13,puVar5[1]);
        }
        uVar3 = (**(code **)**(undefined8 **)(param_4 + 0x38))();
        if (uVar3 < 0x201) {
          uStack_278 = *(undefined8 *)(param_2 + 0x18);
          uStack_280 = *(undefined8 *)(param_2 + 0x10);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar4 = FUN_03bf27e0(&uStack_280,0);
          if (uVar3 == uVar4) {
            uStack_268 = 0;
            uStack_260 = 0;
            uStack_258 = 0;
            FUN_03bf283c(param_1,&uStack_268,0x444c5441,uVar3 + 0x1c,*(undefined4 *)(lVar12 + 0xe0),
                         0);
            uStack_248 = uStack_260;
            uStack_250 = uStack_268;
            uStack_240 = uStack_258;
            uStack_278 = *(undefined8 *)(lVar12 + 0x18);
            uStack_280 = *(undefined8 *)(lVar12 + 0x10);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            auStack_214[0] = 0;
            iStack_218 = *(int *)(param_2 + 0x14) - *(int *)(lVar12 + 0x14);
            uStack_228 = uStack_248;
            uStack_230 = uStack_250;
            uStack_220 = uStack_240;
            uStack_21c = (undefined4)uStack_280;
            uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x38) + 0x18))(param_3);
            FUN_04037e20(auStack_214,uVar6,uVar3,0);
            puVar2 = Method_System_Collections_Comparer_GetObjectData__;
            lVar12 = *(long *)Method_System_Collections_Comparer_GetObjectData__;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar12 = *(long *)puVar2;
            }
            if (**(long **)(lVar12 + 0xb8) != 0) {
              FUN_03bb7730(**(long **)(lVar12 + 0xb8),&uStack_230,0);
              if (*(long *)(lVar1 + 0x28) == lStack_8) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            goto LAB_023624f0;
          }
          uVar6 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                    );
          uVar6 = FUN_01f08890(uVar6,4);
          puVar2 = Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__;
          uStack_268 = CONCAT44(uStack_268._4_4_,uVar3);
          uVar7 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__);
          uVar7 = thunk_FUN_01f113fc(uVar7,&uStack_268);
          FUN_01bc50c0(uVar6);
          FUN_01bc56ec(uVar6,uVar7);
          FUN_01bc5408(uVar6,0,uVar7);
          uVar7 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 8);
          thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
          FUN_01bc4c70();
          plVar13 = (long *)FUN_03579868(uVar7,0);
          FUN_01bc50c0();
          uVar7 = (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
          FUN_01bc50c0(uVar6);
          FUN_01bc56ec(uVar6,uVar7);
          FUN_01bc5408(uVar6,1,uVar7);
          FUN_01bc50c0(uVar6);
          FUN_01bc56ec(uVar6,param_2);
          FUN_01bc5408(uVar6,2,param_2);
          FUN_01bc50c0(param_2);
          uStack_278 = *(undefined8 *)(param_2 + 0x18);
          uStack_280 = *(undefined8 *)(param_2 + 0x10);
          thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_GetHashCodeOfString__);
          FUN_01bc4c70();
          uStack_284 = FUN_03bf27e0(&uStack_280,0);
          uVar7 = thunk_FUN_01efb3a4(puVar2);
          uVar7 = thunk_FUN_01f113fc(uVar7,&uStack_284);
          FUN_01bc50c0(uVar6);
          FUN_01bc56ec(uVar6,uVar7);
          FUN_01bc5408(uVar6,3,uVar7);
          uVar7 = thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<LayoutElement>__);
          uVar6 = FUN_0340f378(uVar7,uVar6,0);
        }
        else {
          uVar6 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 8);
          thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
          FUN_01bc4c70();
          plVar13 = (long *)FUN_03579868(uVar6,0);
          FUN_01bc50c0();
          uVar6 = (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
          uStack_268 = CONCAT44(uStack_268._4_4_,0x200);
          uVar7 = thunk_FUN_01efb3a4(
                                    Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                    );
          uVar7 = thunk_FUN_01f113fc(uVar7,&uStack_268);
          uVar8 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_Component_GetComponent<InteractableUnityEventWrapper>__
                                    );
          uVar6 = FUN_0340f2f0(uVar8,uVar6,uVar7,0);
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar7 = thunk_FUN_01f117cc();
        uVar8 = thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<LayoutGroup>__);
        FUN_034efd98(uVar7,uVar6,uVar8,0);
        goto LAB_023627ac;
      }
      uVar6 = thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<InteractableTool>__);
      uVar6 = FUN_0340f2f0(uVar6,param_2,lVar12,0);
    }
    else {
      uVar6 = thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<InsideSceneChecker>__);
      uVar6 = FUN_03406290(uVar6,param_2,0);
    }
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
    uVar7 = thunk_FUN_01f117cc();
    FUN_0356adc8(uVar7,uVar6,0);
  }
LAB_023627ac:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,param_4);
}


