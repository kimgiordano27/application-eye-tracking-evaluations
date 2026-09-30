/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$InvokeOnSerialized
ENTRY_POINT: 05dd7944
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05dd7b50) */
/* WARNING: Removing unreachable block (ram,0x05dd7b54) */
/* WARNING: Removing unreachable block (ram,0x05dd7b58) */
/* WARNING: Removing unreachable block (ram,0x05dd7bc0) */

void Newtonsoft_Json_Serialization_JsonContract__InvokeOnSerialized(long param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  char local_38 [4];
  int local_34;
  
                    /* try { // try from 05dd794c to 05ed796b has its CatchHandler @ 05dd7b14 */
  if ((DAT_07a4538d & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075ac960);
    FUN_031f20f4(PTR_DAT_0759c3d8);
    FUN_031f20f4(PTR_DAT_075e2eb0);
                    /* try { // try from 05dd7990 to 05ed7993 has its CatchHandler @ 05dd7b08 */
    DAT_07a4538d = 1;
  }
  local_34 = 0;
  local_38[0] = '\0';
                    /* try { // try from 05dd79a4 to 05ed79a7 has its CatchHandler @ 05dd7af4 */
  if (((*(long *)(param_1 + 0x38) == 0) ||
      (uVar3 = FUN_05d25fd4(*(long *)(param_1 + 0x38),0), (uVar3 & 1) != 0)) ||
     (FUN_05dd585c(param_1), *(char *)(param_1 + 0x54) == '\0')) {
LAB_05dd7a18:
                    /* try { // try from 05dd7a18 to 05ed7a4b has its CatchHandler @ 05dd78f0 */
    *(undefined1 *)(param_1 + 0x56) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    puVar1 = PTR_DAT_075ac960;
    if ((param_2 & 1) != 0) {
      plVar7 = (long *)(param_1 + 0x28);
      if (*plVar7 != 0) {
        if (*(int *)(*plVar7 + 0x18) == 0x1000) {
          lVar4 = *(long *)PTR_DAT_075ac960;
                    /* try { // try from 05dd7a4c to 05ed7a4f has its CatchHandler @ 05dd7b00 */
          if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* try { // try from 05dd7a50 to 05ed7a57 has its CatchHandler @ 05dd78f0 */
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar4 = *(long *)puVar1;
          }
                    /* try { // try from 05dd7a58 to 05ed7a5b has its CatchHandler @ 05dd7b10 */
          plVar6 = *(long **)(lVar4 + 0xb8);
                    /* try { // try from 05dd7a5c to 05ed7a5f has its CatchHandler @ 05dd7b0c */
                    /* try { // try from 05dd7a60 to 05ed7a63 has its CatchHandler @ 05dd7b04 */
          if (*plVar6 == 0) {
            if (*(int *)(lVar4 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              plVar6 = *(long **)(*(long *)puVar1 + 0xb8);
            }
            lVar9 = plVar6[1];
            local_38[0] = '\0';
            FUN_05e65364(lVar9,local_38,0);
            lVar4 = *(long *)puVar1;
                    /* try { // try from 05dd7ae4 to 05ed7ae7 has its CatchHandler @ 05dd7b18 */
            if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 05dd7aac with catch @ 05dd7ae8
                       try { // try from 05dd7ae8 to 05ed7b2f has its CatchHandler @ 05dd78f0 */
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                    /* catch() { ... } // from try @ 05dd7a78 with catch @ 05dd7aec */
              lVar4 = *(long *)puVar1;
            }
                    /* catch() { ... } // from try @ 05dd7a70 with catch @ 05dd7af0 */
            plVar6 = *(long **)(lVar4 + 0xb8);
                    /* catch() { ... } // from try @ 05dd79a4 with catch @ 05dd7af4
                       catch() { ... } // from try @ 05dd79dc with catch @ 05dd7af4 */
                    /* catch() { ... } // from try @ 05dd7a0c with catch @ 05dd7af8 */
            if (*plVar6 == 0) {
                    /* catch() { ... } // from try @ 05dd79c8 with catch @ 05dd7afc */
                    /* catch() { ... } // from try @ 05dd7a4c with catch @ 05dd7b00 */
              lVar10 = *plVar7;
                    /* catch() { ... } // from try @ 05dd7a60 with catch @ 05dd7b04 */
              if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 05dd7990 with catch @ 05dd7b08 */
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                    /* catch() { ... } // from try @ 05dd7a5c with catch @ 05dd7b0c */
                    /* catch() { ... } // from try @ 05dd7a58 with catch @ 05dd7b10 */
                plVar6 = *(long **)(*(long *)puVar1 + 0xb8);
              }
                    /* catch() { ... } // from try @ 05dd794c with catch @ 05dd7b14 */
              *plVar6 = lVar10;
                    /* catch() { ... } // from try @ 05dd7a00 with catch @ 05dd7b18
                       catch() { ... } // from try @ 05dd7ae4 with catch @ 05dd7b18 */
              thunk_FUN_0329bf60(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar10);
            }
                    /* try { // try from 05dd7b30 to 05ed7b33 has its CatchHandler @ 05dd7b40 */
            if (local_38[0] != '\0') {
                    /* catch() { ... } // from try @ 05dd7b30 with catch @ 05dd7b40 */
              thunk_FUN_032004d4(lVar9,0);
            }
          }
        }
        *plVar7 = 0;
                    /* try { // try from 05dd7a70 to 05ed7a73 has its CatchHandler @ 05dd7af0 */
        thunk_FUN_0329bf60(plVar7,0);
                    /* try { // try from 05dd7a78 to 05ed7aa7 has its CatchHandler @ 05dd7aec */
        if (*(int *)(*(long *)PTR_DAT_0759c3d8 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_05e3a030(param_1,0);
      }
    }
    return;
  }
                    /* try { // try from 05dd79c8 to 05ed79cb has its CatchHandler @ 05dd7afc */
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
                    /* try { // try from 05dd79dc to 05ed79df has its CatchHandler @ 05dd7af4 */
    if (*(int *)(*(long *)PTR_DAT_075e2eb0 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    thunk_FUN_03223cbc(uVar8,&local_34);
    if (local_34 != 0) {
      uVar8 = FUN_05dd4624(param_1,*(undefined8 *)(param_1 + 0x30));
      iVar2 = local_34;
      thunk_FUN_03257e30(PTR_DAT_075e2eb0);
      FUN_02d65908();
      uVar8 = Newtonsoft_Json_Serialization_DefaultReferenceResolver__GetMappings(uVar8,iVar2);
      uVar5 = thunk_FUN_03257e30(PTR_DAT_075eba28);
                    /* WARNING: Subroutine does not return */
      FUN_031f225c(uVar8,uVar5);
    }
                    /* try { // try from 05dd7a00 to 05ed7a07 has its CatchHandler @ 05dd7b18 */
    if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 05dd7a0c to 05ed7a17 has its CatchHandler @ 05dd7af8 */
      FUN_05d257b0(*(long *)(param_1 + 0x38),0);
      goto LAB_05dd7a18;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05dd7b70 to 05ed7bcb has its CatchHandler @ 05dd7b70
                       catch() { ... } // from try @ 05dd7b70 with catch @ 05dd7b70
                       catch() { ... } // from try @ 05dd7c18 with catch @ 05dd7b70
                       catch() { ... } // from try @ 05dd7c54 with catch @ 05dd7b70
                       catch() { ... } // from try @ 05dd7c9c with catch @ 05dd7b70 */
  FUN_031f2390();
}


