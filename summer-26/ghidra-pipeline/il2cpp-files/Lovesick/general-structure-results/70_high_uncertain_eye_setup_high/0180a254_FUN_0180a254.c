/*
FUNCTION_NAME: FUN_0180a254
ENTRY_POINT: 0180a254
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_0180a254(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  puVar1 = Method_System_Collections_Generic_List<IXmlNode>__ctor__;
  if ((DAT_037793b5 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f3b78);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXmlNode>__ctor__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_25__);
    DAT_037793b5 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_25__;
  uVar5 = FUN_01802a3c(param_1,param_2,param_3);
  puVar1 = PTR_DAT_033f3b78;
  if (param_1 != (long *)0x0) {
    lVar7 = *param_1;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_033f3b78) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0180a338;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(param_1,*(long *)PTR_DAT_033f3b78,0);
LAB_0180a338:
    uVar9 = (*(code *)*puVar6)(param_1,puVar6[1]);
    if ((uVar9 & 1) != 0) {
      lVar8 = *param_1;
      lVar7 = *(long *)puVar1;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto FUN_0180a3a4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(param_1,lVar7,1);
FUN_0180a3a4:
      uVar3 = (*(code *)*puVar6)(param_1,puVar6[1]);
      lVar8 = *param_1;
      lVar7 = *(long *)puVar1;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_0180a404;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(param_1,lVar7,2);
LAB_0180a404:
      uVar4 = (*(code *)*puVar6)(param_1,puVar6[1]);
      goto LAB_0180a414;
    }
  }
  uVar4 = 0;
  uVar3 = 0;
LAB_0180a414:
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_018028a0(lVar7,uVar5,param_4);
  *(undefined8 *)(lVar7 + 0x98) = param_2;
  *(undefined4 *)(lVar7 + 0x8c) = uVar3;
  *(undefined4 *)(lVar7 + 0x90) = uVar4;
  return lVar7;
}


