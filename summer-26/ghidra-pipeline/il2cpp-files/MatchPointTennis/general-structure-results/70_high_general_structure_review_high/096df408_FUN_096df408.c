/*
FUNCTION_NAME: FUN_096df408
ENTRY_POINT: 096df408
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_096df408(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  
  puVar3 = UnityWebSocketSharp_Opcode_var;
  puVar2 = System_Runtime_Remoting_Messaging_OneWayAttribute_var;
  param_3 = param_3 & 0xffffffff;
LAB_096df440:
  iVar1 = (int)param_2;
  if ((DAT_0a547195 & 1) == 0) {
    FUN_04447ba8(System_Runtime_Serialization_OnDeserializedAttribute_var);
    FUN_04447ba8(System_Runtime_Serialization_OnDeserializingAttribute_var);
    FUN_04447ba8(PTR_DAT_09f1e9e0);
    FUN_04447ba8(WebSocketSharp_Opcode_var);
    FUN_04447ba8(OVRTriangleMesh_var);
    FUN_04447ba8(System_Runtime_Remoting_ObjRef_var);
    FUN_04447ba8(puVar3);
    FUN_04447ba8(puVar2);
    DAT_0a547195 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x40);
  if (lVar5 != 0) {
    iVar7 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar7) {
        return;
      }
      auVar9 = FUN_05e9b040(lVar5,iVar7,*(undefined8 *)puVar2);
      lVar5 = auVar9._8_8_;
      param_2 = auVar9._0_8_;
      if (lVar5 == 0) break;
      if (0 < *(int *)(lVar5 + 0x18)) {
        iVar8 = 0;
        do {
          lVar6 = FUN_05badb74(lVar5,iVar8,*(undefined8 *)puVar3);
          if (lVar6 == 0) goto LAB_096df5ec;
          if (*(int *)(lVar6 + 0x28) == iVar1) {
            if (((param_3 & 1) != 0) && (*(char *)(lVar6 + 0x48) == '\0')) {
              return;
            }
            FUN_05baf638(lVar5,iVar8,*(undefined8 *)WebSocketSharp_Opcode_var);
            FUN_096de504(param_1,*(undefined4 *)(lVar6 + 0x28));
            if (*(int *)(lVar5 + 0x18) != 0) {
              return;
            }
            if (*(long *)(param_1 + 0x40) == 0) goto LAB_096df5ec;
            uVar4 = Unity_Collections_NativeArray<IntPtr>__CopyTo
                              (*(long *)(param_1 + 0x40),param_2,lVar5,
                               *(undefined8 *)
                                System_Runtime_Serialization_OnDeserializedAttribute_var);
            if (*(long *)(param_1 + 0x40) == 0) goto LAB_096df5ec;
            FUN_05e9cbcc(*(long *)(param_1 + 0x40),uVar4,
                         *(undefined8 *)System_Runtime_Serialization_OnDeserializingAttribute_var);
            if (*(long *)(param_1 + 0x48) == 0) goto LAB_096df5ec;
            FUN_05b05fbc(*(long *)(param_1 + 0x48),uVar4,*(undefined8 *)PTR_DAT_09f1e9e0);
            param_3 = 1;
            goto LAB_096df440;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(lVar5 + 0x18));
      }
      lVar5 = *(long *)(param_1 + 0x40);
      iVar7 = iVar7 + 1;
    } while (lVar5 != 0);
  }
LAB_096df5ec:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


