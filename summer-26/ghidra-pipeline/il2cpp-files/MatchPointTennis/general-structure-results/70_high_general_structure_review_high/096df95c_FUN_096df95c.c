/*
FUNCTION_NAME: FUN_096df95c
ENTRY_POINT: 096df95c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void FUN_096df95c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  long lStack_58;
  
  if ((DAT_0a547198 & 1) == 0) {
                    /* try { // try from 096df990 to 097df99b has its CatchHandler @ 096dfb30 */
    FUN_04447ba8(OVRSemanticLabels_var);
                    /* try { // try from 096df9a0 to 097df9ab has its CatchHandler @ 096dfb2c */
    FUN_04447ba8(OVRSharable_var);
    FUN_04447ba8(OVRStorable_var);
    FUN_04447ba8(System_Runtime_InteropServices_OptionalAttribute_var);
    FUN_04447ba8(OVRTelemetryMarker_var);
    FUN_04447ba8(System_Runtime_Serialization_OnDeserializedAttribute_var);
    FUN_04447ba8(System_Runtime_Serialization_OnDeserializingAttribute_var);
    FUN_04447ba8(PTR_DAT_09f1e9e0);
    FUN_04447ba8(WebSocketSharp_Opcode_var);
                    /* try { // try from 096dfa00 to 097dfa03 has its CatchHandler @ 096dfb1c */
    FUN_04447ba8(OVRTriangleMesh_var);
    FUN_04447ba8(UnityWebSocketSharp_Opcode_var);
    DAT_0a547198 = 1;
  }
  puVar3 = OVRSharable_var;
  puVar2 = OVRSemanticLabels_var;
  uStack_68 = 0;
  local_70 = 0;
  lStack_58 = 0;
  local_60 = 0;
  local_80 = 0;
  lStack_78 = 0;
  if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
                    /* try { // try from 096dfa50 to 097dfa53 has its CatchHandler @ 096dfb18 */
  FUN_05e9bed4(&local_a0,*(long *)(param_1 + 0x40),*(undefined8 *)OVRTelemetryMarker_var);
                    /* try { // try from 096dfa60 to 097dfaa7 has its CatchHandler @ 096dfb34 */
  uStack_68 = uStack_98;
  local_70 = local_a0;
  lStack_58 = lStack_88;
  local_60 = uStack_90;
  uVar8 = local_80;
  lVar9 = 0;
  do {
    uVar7 = FUN_051d12e0(&local_70,*(undefined8 *)puVar3);
    lVar10 = lStack_58;
    uVar5 = local_60;
    if ((uVar7 & 1) == 0) goto LAB_096dfbac;
    if (param_2 == 0) {
      local_80 = local_60;
      lStack_78 = lStack_58;
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar8 = local_60;
    lVar9 = lStack_58;
  } while (*(int *)(param_2 + 0x28) != (int)local_60);
  local_80 = local_60;
  lStack_78 = lStack_58;
  uVar8 = FUN_078b4450(param_3,0);
  puVar4 = WebSocketSharp_Opcode_var;
  puVar3 = UnityWebSocketSharp_Opcode_var;
  if ((uVar8 & 1) == 0) {
    lVar10 = FUN_096df2a0(&local_80,param_3);
                    /* try { // try from 096dfb94 to 097dfb9f has its CatchHandler @ 096df89c */
    uVar8 = local_80;
    lVar9 = lStack_78;
    if (lVar10 != 0) {
                    /* try { // try from 096dfba0 to 097dfba7 has its CatchHandler @ 096dfba8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 096dfb68 with catch @ 096dfba8
                       catch(type#2 @ 00000000) { ... } // from try @ 096dfba0 with catch @ 096dfba8
                        */
      FUN_096df95c(param_1,lVar10,0,param_4);
      uVar8 = local_80;
      lVar9 = lStack_78;
    }
  }
  else {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    iVar1 = *(int *)(lVar10 + 0x18);
                    /* try { // try from 096dfaa8 to 097dfb0b has its CatchHandler @ 096df89c */
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      lVar9 = FUN_05badb74(lVar10,iVar1,*(undefined8 *)puVar3);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(char *)(lVar9 + 0x48) == '\0') {
        FUN_05baf638(lVar10,iVar1,*(undefined8 *)puVar4);
      }
    }
    FUN_05bae050(lVar10,param_4,*(undefined8 *)System_Runtime_InteropServices_OptionalAttribute_var)
    ;
                    /* try { // try from 096dfb0c to 097dfb0f has its CatchHandler @ 096dfb28 */
    uVar8 = local_80;
    lVar9 = lStack_78;
    if (*(int *)(lVar10 + 0x18) == 0) {
                    /* try { // try from 096dfb10 to 097dfb13 has its CatchHandler @ 096dfb24 */
                    /* try { // try from 096dfb14 to 097dfb17 has its CatchHandler @ 096dfb20 */
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 096dfa50 with catch @ 096dfb18
                       try { // try from 096dfb18 to 097dfb4b has its CatchHandler @ 096df89c */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 096dfa00 with catch @ 096dfb1c
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 096dfb14 with catch @ 096dfb20
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 096dfb10 with catch @ 096dfb24
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 096dfb0c with catch @ 096dfb28
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 096df9a0 with catch @ 096dfb2c
                        */
      uVar6 = Unity_Collections_NativeArray<IntPtr>__CopyTo
                        (*(long *)(param_1 + 0x40),uVar5,lVar10,
                         *(undefined8 *)System_Runtime_Serialization_OnDeserializedAttribute_var);
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 096df990 with catch @ 096dfb30
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 096dfa60 with catch @ 096dfb34
                        */
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
                    /* try { // try from 096dfb4c to 097dfb4f has its CatchHandler @ 096dfb60 */
      FUN_05e9cbcc(*(long *)(param_1 + 0x40),uVar6,
                   *(undefined8 *)System_Runtime_Serialization_OnDeserializingAttribute_var);
      if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
                    /* catch() { ... } // from try @ 096dfb4c with catch @ 096dfb60 */
                    /* try { // try from 096dfb68 to 097dfb93 has its CatchHandler @ 096dfba8 */
      FUN_05b05fbc(*(long *)(param_1 + 0x48),uVar6,*(undefined8 *)PTR_DAT_09f1e9e0);
      FUN_096df408(param_1,uVar5 & 0xffffffff,1);
      uVar8 = local_80;
      lVar9 = lStack_78;
    }
  }
LAB_096dfbac:
  lStack_78 = lVar9;
  local_80 = uVar8;
  FUN_051d12dc(&local_70,*(undefined8 *)puVar2);
  return;
}


