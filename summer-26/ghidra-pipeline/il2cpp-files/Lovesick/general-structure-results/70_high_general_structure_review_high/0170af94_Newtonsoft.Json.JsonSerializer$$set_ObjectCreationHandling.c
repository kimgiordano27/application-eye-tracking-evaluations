/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ObjectCreationHandling
ENTRY_POINT: 0170af94
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0170b0e8) */
/* WARNING: Removing unreachable block (ram,0x0170b100) */
/* WARNING: Removing unreachable block (ram,0x0170b104) */
/* WARNING: Removing unreachable block (ram,0x0170b110) */
/* WARNING: Removing unreachable block (ram,0x0170b124) */
/* WARNING: Removing unreachable block (ram,0x0170b138) */
/* WARNING: Removing unreachable block (ram,0x0170b140) */
/* WARNING: Removing unreachable block (ram,0x0170b1e0) */
/* WARNING: Removing unreachable block (ram,0x0170b150) */
/* WARNING: Removing unreachable block (ram,0x0170b154) */
/* WARNING: Removing unreachable block (ram,0x0170b160) */
/* WARNING: Removing unreachable block (ram,0x0170b180) */
/* WARNING: Removing unreachable block (ram,0x0170b220) */
/* WARNING: Removing unreachable block (ram,0x0170b234) */
/* WARNING: Removing unreachable block (ram,0x0170b238) */

ulong Newtonsoft_Json_JsonSerializer__set_ObjectCreationHandling(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint unaff_w19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  int unaff_w24;
  long unaff_x25;
  
  if (unaff_w24 != 0x40000000) {
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar5 = thunk_FUN_00d48444(StringLiteral_5433);
    uVar7 = thunk_FUN_00d48444(Method_Polenter_Serialization_Advanced_XmlPropertySerializer__ctor__)
    ;
    FUN_016ec624(uVar4,uVar5,uVar7,0);
    uVar5 = thunk_FUN_00d48444(
                              Method_Meta_WitAi_Lib_BaseAudioClipInput_<PerformActivation>d__61_System_Collections_IEnumerator_Reset__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,uVar5);
  }
  if (unaff_x25 == 0) {
    uVar6 = (ulong)-(uint)(unaff_x22 != 0);
  }
  else {
    if (unaff_x22 != 0) {
      if (DAT_037780a2 == '\0') {
        thunk_FUN_00d48444(PTR_DAT_033ee010);
        DAT_037780a2 = '\x01';
      }
      if ((*(uint *)(unaff_x25 + 0x10) < unaff_w23) ||
         (*(uint *)(unaff_x25 + 0x10) - unaff_w23 < unaff_w20)) {
        FUN_01792dd4(0x18,0);
      }
      lVar2 = FUN_015fd038();
      if (DAT_037780a2 == '\0') {
        thunk_FUN_00d48444(PTR_DAT_033ee010);
        DAT_037780a2 = '\x01';
      }
      if ((*(uint *)(unaff_x22 + 0x10) < unaff_w21) ||
         (*(uint *)(unaff_x22 + 0x10) - unaff_w21 < unaff_w19)) {
        FUN_01792dd4(0x18,0);
      }
      lVar3 = FUN_015fd038();
      if (DAT_03778a40 == '\0') {
        thunk_FUN_00d48444(Method_System_Configuration_IgnoreSection_IsModified__);
        thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
        DAT_03778a40 = '\x01';
      }
      puVar1 = Method_System_Configuration_IgnoreSection_IsModified__;
      uVar4 = FUN_01120480(lVar2 + (long)(int)unaff_w23 * 2,unaff_w20,
                           *(undefined8 *)Method_System_Configuration_IgnoreSection_IsModified__);
      uVar5 = FUN_01120480(lVar3 + (long)(int)unaff_w21 * 2,unaff_w19,*(undefined8 *)puVar1);
      uVar6 = FUN_01785574(uVar4,unaff_w20,uVar5,unaff_w19,0);
      return uVar6;
    }
    uVar6 = 1;
  }
  return uVar6;
}


