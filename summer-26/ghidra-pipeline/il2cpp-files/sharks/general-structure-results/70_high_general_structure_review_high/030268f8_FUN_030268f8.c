/*
FUNCTION_NAME: FUN_030268f8
ENTRY_POINT: 030268f8
PROGRAM: sharks-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_5;telemetry_or_network_hits_3
*/


undefined1  [16] FUN_030268f8(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_03a2b2f1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_03822198);
    FUN_017fc350(PTR_DAT_038221a0);
    FUN_017fc350(PTR_DAT_038221a8);
    FUN_017fc350(PTR_DAT_037f45f0);
    FUN_017fc350(PTR_DAT_038221b0);
    FUN_017fc350(PTR_DAT_037f9bc0);
    FUN_017fc350(PTR_DAT_03822118);
    DAT_03a2b2f1 = 1;
  }
  if ((param_3 & 1) == 0) {
LAB_030269a8:
    uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1,*(undefined8 *)(*param_1 + 0x2d0));
    if ((uVar3 & 1) == 0) {
      if (param_1[0x31] == 0) {
                    /* try { // try from 03026aac to 03126c97 has its CatchHandler @ 03026aac
                       catch() { ... } // from try @ 03026aac with catch @ 03026aac
                       catch() { ... } // from try @ 03026cfc with catch @ 03026aac
                       catch() { ... } // from try @ 03026ee8 with catch @ 03026aac
                       catch() { ... } // from try @ 0302700c with catch @ 03026aac
                       catch() { ... } // from try @ 0302701c with catch @ 03026aac
                       catch() { ... } // from try @ 030270f0 with catch @ 03026aac
                       catch() { ... } // from try @ 03027130 with catch @ 03026aac
                       catch() { ... } // from try @ 03027170 with catch @ 03026aac */
        uVar6 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f9bc0);
        FUN_03122f38(uVar6,*(undefined8 *)PTR_DAT_03822118,0,7,param_2,0);
        uVar4 = 0;
        uVar7 = *(undefined8 *)PTR_DAT_038221b0;
        goto LAB_03026a84;
      }
      lVar5 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03822198);
      FUN_02459524(lVar5,param_1,*(undefined8 *)PTR_DAT_038221a0,0);
      if (lVar5 == 0) goto System_Net_WebRequest__GetObjectData;
      uVar4 = (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
    }
    else {
      if (param_1[0x1f] == 0) {
System_Net_WebRequest__GetObjectData:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      uVar4 = FUN_03038b34(param_1[0x1f],0);
      if (*(int *)(*(long *)PTR_DAT_037f45f0 + 0xe0) == 0) {
        thunk_FUN_01843fdc(*(long *)PTR_DAT_037f45f0);
      }
      uVar4 = FUN_01bc6c48(uVar4,*(undefined8 *)PTR_DAT_038221a8);
    }
  }
  else {
    uVar3 = FUN_0302333c(param_1);
    if ((uVar3 & 1) != 0) {
      if (param_1[0x1f] == 0) goto System_Net_WebRequest__GetObjectData;
      iVar2 = FUN_03038af0(param_1[0x1f],0);
      if ((iVar2 != 0) && (param_1[0xd] != 0)) goto LAB_030269a8;
    }
    uVar4 = 0;
  }
  uVar7 = *(undefined8 *)PTR_DAT_038221b0;
  uVar6 = 0;
LAB_03026a84:
  uStack_38 = 0;
  local_40 = 0;
  FUN_01f182cc(&local_40,uVar4,uVar6,uVar7);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = local_40;
  return auVar1;
}


