/*
FUNCTION_NAME: FUN_01d27f78
ENTRY_POINT: 01d27f78
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x01d281f4) */

void FUN_01d27f78(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 local_34;
  
  puVar2 = Meta_XR_ImmersiveDebugger_Utils_InstanceCache_<>c__DisplayClass12_0_TypeInfo;
                    /* try { // try from 01d27f80 to 01e27f83 has its CatchHandler @ 01d27fa4 */
                    /* try { // try from 01d27f84 to 01e27f87 has its CatchHandler @ 01d27fa0 */
                    /* try { // try from 01d27f88 to 01e27f8b has its CatchHandler @ 01d27fdc */
                    /* try { // try from 01d27f8c to 01e27f8f has its CatchHandler @ 01d27f9c */
                    /* try { // try from 01d27f90 to 01e27fcf has its CatchHandler @ 01d27b10 */
                    /* catch() { ... } // from try @ 01d27f8c with catch @ 01d27f9c */
                    /* catch() { ... } // from try @ 01d27f84 with catch @ 01d27fa0 */
  if ((DAT_0377f327 & 1) == 0) {
                    /* catch() { ... } // from try @ 01d27f80 with catch @ 01d27fa4 */
                    /* catch() { ... } // from try @ 01d27f70 with catch @ 01d27fa8 */
                    /* catch() { ... } // from try @ 01d27f5c with catch @ 01d27fac */
    thunk_FUN_00d48444(System_Collections_Generic_List<PlayerInputActions_IPlayerActions>_TypeInfo);
                    /* catch() { ... } // from try @ 01d27f58 with catch @ 01d27fb0 */
                    /* catch() { ... } // from try @ 01d27eb4 with catch @ 01d27fb4 */
                    /* catch() { ... } // from try @ 01d27ec4 with catch @ 01d27fb8 */
    thunk_FUN_00d48444(Method_System_Xml_XmlUtf8RawTextWriter_EncodeSurrogate__);
                    /* catch() { ... } // from try @ 01d27ebc with catch @ 01d27fbc */
                    /* catch() { ... } // from try @ 01d27e4c with catch @ 01d27fc0 */
                    /* catch() { ... } // from try @ 01d27e48 with catch @ 01d27fc4 */
    thunk_FUN_00d48444(Meta_XR_ImmersiveDebugger_Utils_InstanceCache_<>c__DisplayClass12_0_TypeInfo)
    ;
                    /* catch() { ... } // from try @ 01d27e2c with catch @ 01d27fc8 */
                    /* try { // try from 01d27fd0 to 01e27fd3 has its CatchHandler @ 01d2808c */
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
                    /* try { // try from 01d27fd4 to 01e27fff has its CatchHandler @ 01d27b10 */
                    /* catch() { ... } // from try @ 01d27be0 with catch @ 01d27fd8 */
                    /* catch() { ... } // from try @ 01d27bb0 with catch @ 01d27fdc
                       catch() { ... } // from try @ 01d27f88 with catch @ 01d27fdc */
    thunk_FUN_00d48444(StringLiteral_356);
                    /* catch() { ... } // from try @ 01d27c1c with catch @ 01d27fe0 */
                    /* catch() { ... } // from try @ 01d27c0c with catch @ 01d27fe4 */
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputRemoting_SendEvent__);
    DAT_0377f327 = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
                    /* try { // try from 01d28000 to 01e28003 has its CatchHandler @ 01d28080 */
    thunk_FUN_00d32864();
    lVar5 = *(long *)puVar2;
  }
  if (**(long **)(lVar5 + 0xb8) != 0) {
    local_34 = *(undefined4 *)(param_1 + 0xd8);
    uVar6 = FUN_010c93ec(**(long **)(lVar5 + 0xb8),*(undefined8 *)StringLiteral_356,&local_34,
                         param_2,*(undefined8 *)
                                  Method_System_Xml_XmlUtf8RawTextWriter_EncodeSurrogate__);
                    /* try { // try from 01d28040 to 01e2806b has its CatchHandler @ 01d2808c */
    if (param_2 == 0) {
      param_2 = **(long **)(*(long *)
                             System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                           + 0xb8);
    }
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = FUN_01d27f04(param_1);
    iVar4 = FUN_015fd57c(uVar10,param_2,1,uVar7,0);
    puVar3 = Method_UnityEngine_InputSystem_InputRemoting_SendEvent__;
    puVar1 = System_Collections_Generic_List<PlayerInputActions_IPlayerActions>_TypeInfo;
    if (iVar4 == 0) {
      uVar9 = FUN_015fe7e8(*(undefined8 *)(param_1 + 0x30),param_2,0);
      if ((uVar9 & 1) != 0) {
        FUN_01d285a0(param_1,*(undefined8 *)puVar3);
        *(long *)(param_1 + 0x30) = param_2;
        *(undefined8 *)(param_1 + 200) = 0;
        if (*(long *)(param_1 + 0x78) != 0) {
          lVar8 = *(long *)(*(long *)(param_1 + 0x78) + 0x40);
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01fd1024(lVar5,3,param_1,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01d2861c(lVar8,lVar5);
        }
      }
    }
    else {
      if (*(long *)(param_1 + 0x78) != 0) {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)(param_2 + 0x10) == 0) {
          uVar6 = FUN_01d282e4();
          uVar7 = thunk_FUN_00d48444(Method_System_Collections_Generic_Queue<char>_Enqueue__);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar6,uVar7);
        }
        lVar5 = *(long *)(*(long *)(param_1 + 0x78) + 0x40);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01d28324(lVar5,param_2,param_1);
        lVar5 = *(long *)(param_1 + 0x30);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)(lVar5 + 0x10) != 0) {
          if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar8 = *(long *)(*(long *)(param_1 + 0x78) + 0x40);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01d284e4(lVar8,lVar5);
        }
      }
      FUN_01d285a0(param_1,*(undefined8 *)puVar3);
      *(long *)(param_1 + 0x30) = param_2;
      *(undefined8 *)(param_1 + 200) = 0;
      if (*(long *)(param_1 + 0x78) != 0) {
        lVar8 = *(long *)(*(long *)(param_1 + 0x78) + 0x40);
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01fd1024(lVar5,3,param_1,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01d2861c(lVar8,lVar5);
      }
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar2;
    }
    if (**(long **)(lVar5 + 0xb8) != 0) {
      FUN_0173adc4(**(long **)(lVar5 + 0xb8),3,uVar6,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


