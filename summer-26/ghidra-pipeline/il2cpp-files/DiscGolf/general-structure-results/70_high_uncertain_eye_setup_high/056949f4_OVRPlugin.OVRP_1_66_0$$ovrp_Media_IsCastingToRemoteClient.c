/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$ovrp_Media_IsCastingToRemoteClient
ENTRY_POINT: 056949f4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_66_0__ovrp_Media_IsCastingToRemoteClient(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x21;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  ulong uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  
                    /* try { // try from 056949f4 to 057949fb has its CatchHandler @ 05694a30 */
  lVar6 = *unaff_x21;
                    /* try { // try from 056949fc to 057949ff has its CatchHandler @ 05694a18 */
  uStack0000000000000030 = 0;
                    /* try { // try from 05694a00 to 05794a4b has its CatchHandler @ 05693f2c */
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar6 = *unaff_x21;
  }
                    /* catch() { ... } // from try @ 056949fc with catch @ 05694a18 */
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
                    /* catch() { ... } // from try @ 0569494c with catch @ 05694a1c */
  if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 056949ec with catch @ 05694a20 */
                    /* catch() { ... } // from try @ 05694728 with catch @ 05694a24 */
                    /* catch() { ... } // from try @ 056948f8 with catch @ 05694a28 */
                    /* catch() { ... } // from try @ 05694894 with catch @ 05694a2c */
    iVar5 = FUN_04e8c3d8(lVar6,*(undefined8 *)UnityEngine_Pool_ObjectPool<LayoutRebuilder>_TypeInfo)
    ;
                    /* catch() { ... } // from try @ 056949f4 with catch @ 05694a30 */
    if (iVar5 == 0) {
      lVar6 = *unaff_x21;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar6 = *unaff_x21;
      }
                    /* try { // try from 05694a4c to 05794a4f has its CatchHandler @ 05694a58 */
      if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_05694af8;
                    /* catch() { ... } // from try @ 05694a4c with catch @ 05694a58 */
                    /* try { // try from 05694a5c to 05794a63 has its CatchHandler @ 05694aec */
                    /* try { // try from 05694a64 to 05794a8b has its CatchHandler @ 05693f2c */
                    /* catch() { ... } // from try @ 056949e0 with catch @ 05694a68 */
      FUN_04df8a2c(&stack0x00000010,**(long **)(lVar6 + 0xb8),
                   *(undefined8 *)UnityEngine_Pool_ObjectPool<Awaitable>_TypeInfo);
      puVar2 = UnityEngine_Pool_ObjectPool<TypePathVisitor>_TypeInfo;
      puVar1 = UnityEngine_Pool_ObjectPool<AutoCompletePathVisitor>_TypeInfo;
                    /* catch() { ... } // from try @ 05694508 with catch @ 05694a6c */
      while (uVar7 = FUN_05219894(&stack0x00000010,*(undefined8 *)puVar2),
            uVar4 = uStack0000000000000028, uVar3 = uStack0000000000000020, (uVar7 & 1) != 0) {
        lVar6 = *unaff_x21;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar6 = *unaff_x21;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04e8c720(lVar6,uVar4,uVar3 & 0xffffffff,*(undefined8 *)puVar1);
      }
      FUN_052199b8(&stack0x00000010,
                   *(undefined8 *)UnityEngine_Pool_ObjectPool<StringBuilder>_TypeInfo);
    }
    return;
  }
LAB_05694af8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


