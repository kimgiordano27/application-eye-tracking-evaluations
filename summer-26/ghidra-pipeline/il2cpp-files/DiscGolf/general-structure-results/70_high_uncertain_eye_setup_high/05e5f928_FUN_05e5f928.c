/*
FUNCTION_NAME: FUN_05e5f928
ENTRY_POINT: 05e5f928
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05e5f928(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_06dc3b2b & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fb9d8);
    FUN_02d965b8(OVRPlugin_OVRP_1_128_0_TypeInfo);
    FUN_02d965b8(Mono_Security_PKCS7_SignedData_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a09d78);
    FUN_02d965b8(Method_System_Collections_Generic_List<RichTextTagParser_Tag>_Add__);
    FUN_02d965b8(Method_System_Collections_Generic_List<RichTextTagParser_Tag>_Clear__);
    FUN_02d965b8(Method_System_Collections_Generic_List<RichTextTagParser_Tag>_Contains__);
    FUN_02d965b8(Method_System_Collections_Generic_List<RichTextTagParser_Tag>_GetEnumerator__);
    FUN_02d965b8(Method_System_Collections_Generic_List<RichTextTagParser_Tag>_get_Count__);
    DAT_06dc3b2b = 1;
  }
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 05e5f9f8 with catch @ 05e5f9dc
                       catch() { ... } // from try @ 05e5fa30 with catch @ 05e5f9dc
                       catch() { ... } // from try @ 05e5fa58 with catch @ 05e5f9dc */
    puVar4 = (undefined8 *)Method_System_Collections_Generic_List<RichTextTagParser_Tag>_Clear__;
                    /* try { // try from 05e5f9f0 to 05f5f9f7 has its CatchHandler @ 05e5fa10 */
                    /* try { // try from 05e5f9f8 to 05f5fa2b has its CatchHandler @ 05e5f9dc */
    if ((*(char *)(lVar3 + 0x10) != '\0') &&
       (puVar4 = (undefined8 *)Mono_Security_PKCS7_SignedData_TypeInfo,
       *(char *)(lVar3 + 0x11) != '\0')) {
      puVar4 = (undefined8 *)OVRPlugin_OVRP_1_128_0_TypeInfo;
    }
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05e5f9f0 with catch @ 05e5fa10
                        */
    uVar6 = *puVar4;
    puVar4 = (undefined8 *)Method_System_Collections_Generic_List<RichTextTagParser_Tag>_Contains__;
    if ((param_2 & 1) == 0) {
      puVar4 = (undefined8 *)Method_System_Collections_Generic_List<RichTextTagParser_Tag>_Add__;
    }
    uVar5 = *puVar4;
    lVar3 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fb9d8,6);
                    /* try { // try from 05e5fa2c to 05f5fa2f has its CatchHandler @ 05e5fa4c */
    if (lVar3 != 0) {
                    /* try { // try from 05e5fa30 to 05f5fa4f has its CatchHandler @ 05e5f9dc */
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(undefined8 *)(lVar3 + 0x20) = uVar6;
                    /* catch() { ... } // from try @ 05e5fa2c with catch @ 05e5fa4c */
        LeanTween__value((undefined8 *)(lVar3 + 0x20),uVar6);
                    /* try { // try from 05e5fa50 to 05f5fa57 has its CatchHandler @ 05e5fa60 */
                    /* try { // try from 05e5fa58 to 05f5fa63 has its CatchHandler @ 05e5f9dc */
        if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05e5fa50 with catch @ 05e5fa60
                        */
          *(undefined8 *)(lVar3 + 0x28) =
               *(undefined8 *)
                Method_System_Collections_Generic_List<RichTextTagParser_Tag>_get_Count__;
          LeanTween__value((undefined8 *)(lVar3 + 0x28));
          if (2 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x30) = uVar5;
            LeanTween__value((undefined8 *)(lVar3 + 0x30),uVar5);
            if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar3 + 0x38) =
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<RichTextTagParser_Tag>_GetEnumerator__;
              LeanTween__value();
              if ((((*(long *)(param_1 + 0x40) == 0) ||
                   (lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 0x90), lVar2 == 0)) ||
                  (lVar2 = *(long *)(lVar2 + 0x18), lVar2 == 0)) ||
                 (plVar1 = (long *)thunk_FUN_02da6564(lVar2,0), plVar1 == (long *)0x0))
              goto LAB_05e5fbb8;
              uVar6 = (**(code **)(*plVar1 + 0x208))(plVar1,*(undefined8 *)(*plVar1 + 0x210));
              if (4 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x40) = uVar6;
                LeanTween__value((undefined8 *)(lVar3 + 0x40),uVar6);
                if (5 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)PTR_DAT_06a09d78;
                  LeanTween__value();
                  uVar6 = FUN_0536dde4(lVar3,0);
                  FUN_05e6f7ec(uVar6,0);
                  lVar3 = *(long *)(param_1 + 0x30);
                  if (lVar3 != 0) {
                    (**(code **)(lVar3 + 0x18))
                              (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
                  }
                  if ((param_2 & 1) == 0) {
                    if (*(long *)(param_1 + 0x40) != 0) {
                      FUN_05e60d4c(*(long *)(param_1 + 0x40),1);
                      return;
                    }
                  }
                  else if ((*(long *)(param_1 + 0x50) != 0) &&
                          (FUN_05e5d968(*(long *)(param_1 + 0x50),0,0,0),
                          *(long *)(param_1 + 0x40) != 0)) {
                    FUN_05e60ddc();
                    return;
                  }
                  goto LAB_05e5fbb8;
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
  }
LAB_05e5fbb8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


