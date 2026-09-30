/*
FUNCTION_NAME: FUN_0345fc30
ENTRY_POINT: 0345fc30
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0346007c) */

long * FUN_0345fc30(long *param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  int *piVar13;
  char local_5c [4];
  long local_58;
  
  if ((DAT_0483294c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_SerializationUtility_DeserializeValue<object>__)
    ;
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_SerializationUtility_SerializeValue<object>__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_GetEnumValues__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_RuntimePanel_Create__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_SerializationNodeDataReader_set_Stream__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_InvokeMember__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_0483294c = 1;
  }
  local_58 = 0;
  local_5c[0] = '\0';
  if (param_1 == (long *)0x0) {
LAB_03460078:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  if (lVar5 == 0) {
    uVar8 = 0;
  }
  else {
    plVar6 = (long *)(**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    if (plVar6 == (long *)0x0) goto LAB_03460078;
    lVar5 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)Method_System_RuntimeType_GetEnumValues__) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0345fd50;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)Method_System_RuntimeType_GetEnumValues__,0)
    ;
LAB_0345fd50:
    uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  puVar2 = Method_System_RuntimeType_InvokeMember__;
  uVar9 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  plVar6 = (long *)FUN_0345f7b0(uVar9,uVar8,&local_58);
  if (local_58 == 0) {
    local_58 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar2;
  }
  uVar9 = **(undefined8 **)(lVar5 + 0xb8);
  local_5c[0] = '\0';
  FUN_035ce230(uVar9,local_5c,0);
  *param_3 = 0;
  thunk_FUN_01f51358(param_3,0);
  uVar8 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar8 = FUN_0345fac4(uVar8);
  plVar10 = (long *)**(long **)(*(long *)puVar2 + 0xb8);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar10 = (long *)(**(code **)(*plVar10 + 0x308))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x310))
  ;
  puVar3 = Method_Sirenix_Serialization_SerializationUtility_DeserializeValue<object>__;
  lVar5 = *(long *)Method_Sirenix_Serialization_SerializationUtility_DeserializeValue<object>__;
  if (plVar10 != (long *)0x0) {
    if ((*(byte *)(lVar5 + 0x130) <= *(byte *)(*plVar10 + 0x130)) &&
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5)) {
      lVar5 = FUN_03452874(plVar10,0);
      *param_3 = lVar5;
      thunk_FUN_01f51358(param_3);
      if (*param_3 != 0) goto LAB_0345ffe8;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_03460144(plVar10);
      lVar5 = *(long *)puVar3;
    }
  }
  lVar4 = local_58;
  plVar10 = (long *)thunk_FUN_01f117cc(lVar5);
  FUN_03452740(plVar10,lVar4,param_1,0);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar10[3] = (long)plVar6;
  thunk_FUN_01f51358(plVar10 + 3,plVar6);
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar2;
  }
  plVar11 = (long *)**(long **)(lVar5 + 0xb8);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar11 + 0x318))(plVar11,uVar8,plVar10,*(undefined8 *)(*plVar11 + 800));
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar12 = FUN_03583338(param_2,0,0);
  if ((uVar12 & 1) == 0) goto LAB_0345ffe8;
  plVar11 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Sirenix_Serialization_SerializationNodeDataReader_set_Stream__
                                      );
  FUN_03460334(plVar11,param_2,plVar10);
  if (plVar6 == (long *)0x0) {
LAB_0345ff7c:
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       Method_Sirenix_Serialization_SerializationUtility_SerializeValue<object>__ +
                     0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_Sirenix_Serialization_SerializationUtility_SerializeValue<object>__))
    goto LAB_0345ff7c;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *(int *)(plVar11 + 5) = (int)plVar6[2];
  }
  lVar5 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
  *param_3 = lVar5;
  thunk_FUN_01f51358(param_3);
  param_3 = (long *)*param_3;
  if (param_3 != (long *)0x0) {
    lVar5 = *(long *)Method_UnityEngine_UIElements_RuntimePanel_Create__;
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_3,lVar5);
    }
  }
  FUN_034528fc(plVar10,param_3,0);
LAB_0345ffe8:
  if (local_5c[0] != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar9,0);
  }
  return plVar10;
}


