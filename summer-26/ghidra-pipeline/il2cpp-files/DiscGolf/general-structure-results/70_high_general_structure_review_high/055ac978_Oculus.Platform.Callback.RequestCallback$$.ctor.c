/*
FUNCTION_NAME: Oculus.Platform.Callback.RequestCallback$$.ctor
ENTRY_POINT: 055ac978
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Oculus_Platform_Callback_RequestCallback___ctor(long *param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
  FUN_05574a40();
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)((long)unaff_x22 + 0x24) == 1) {
    bVar1 = *(byte *)(*(long *)UnityEngine_SendMouseEvents_HitInfo_var + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x22 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)UnityEngine_SendMouseEvents_HitInfo_var)) {
      FUN_055adb88();
      return;
    }
  }
  else {
    if (*(int *)((long)unaff_x22 + 0x24) != 5) {
      thunk_FUN_02dfd288(PTR_DAT_069fc178);
      FUN_0297e1b4();
      uVar3 = FUN_0547e2f8(0);
      uVar4 = thunk_FUN_02dfd288(System_Action<BestFitAllocator_Block>_TypeInfo);
      FUN_055873e0(uVar4,uVar3);
      uVar3 = FUN_05574a94();
      uVar4 = thunk_FUN_02dfd288(System_Action<DebugUI_Panel>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar3,uVar4);
    }
    bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlAtomicValue_Union_var + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x22 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Xml_Schema_XmlAtomicValue_Union_var)) {
      if ((char)unaff_x22[0x20] == '\0') {
        lVar2 = thunk_FUN_02dd3048();
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0();
        }
      }
      else {
        FUN_055a9a84();
      }
      FUN_055ad168();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96be0();
}


