/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$get_DefaultReferenceMappings
ENTRY_POINT: 0591b3c8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase__get_DefaultReferenceMappings
               (long param_1)

{
  ulong uVar1;
  short sVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 (*unaff_x19) [16];
  long unaff_x20;
  long *unaff_x22;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0xa20));
  thunk_FUN_032e1da0(PTR_DAT_07290bd0);
  thunk_FUN_032e1da0(PTR_DAT_07296c98);
  thunk_FUN_032e1da0(PTR_DAT_07290a70);
  thunk_FUN_032e1da0(PTR_DAT_07290be0);
  thunk_FUN_032e1da0(PTR_DAT_07290300);
  thunk_FUN_032e1da0(PTR_DAT_07290d90);
  thunk_FUN_032e1da0(PTR_DAT_07297428);
  *(undefined1 *)(unaff_x20 + 0x30e) = 1;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  if ((DAT_076d52fb & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07290a70);
    DAT_076d52fb = 1;
  }
  puVar5 = PTR_DAT_07290a70;
  puVar4 = PTR_DAT_0727fa20;
  if (2 < *(int *)(*unaff_x19 + 8)) {
    sVar2 = **(short **)*unaff_x19;
    if ((sVar2 == 0x27) || (sVar2 == 0x22)) {
      uVar1 = 0;
      do {
        uVar10 = uVar1;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        if ((DAT_076d52fb & 1) == 0) {
          thunk_FUN_032e1da0(puVar5);
          DAT_076d52fb = 1;
        }
        uVar1 = uVar10 + 1;
        if ((long)(int)*(uint *)(*unaff_x19 + 8) <= (long)uVar1) break;
        if (*(uint *)(*unaff_x19 + 8) <= uVar1) goto LAB_0591b610;
        uVar3 = *(undefined2 *)(*(long *)*unaff_x19 + uVar10 * 2 + 2);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar6 = FUN_058a1fe4(uVar3,0);
      } while ((uVar6 & 1) != 0);
      uVar8 = (uint)uVar10;
      if (uVar8 != 0) {
        uVar7 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727f228,*(int *)(*unaff_x19 + 8) - uVar8);
        auVar11 = FUN_049b2148(uVar7,*(undefined8 *)PTR_DAT_07290d90);
        if (auVar11._8_4_ == 0) {
LAB_0591b610:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *auVar11._0_8_ = sVar2;
        lVar9 = *(long *)PTR_DAT_07296c98;
        if (*(uint *)(*unaff_x19 + 8) <= uVar8) {
          FUN_05943e6c(0);
        }
        if ((*(byte *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
          FUN_032934b8();
        }
        if ((*(byte *)(*(long *)(*(long *)PTR_DAT_07290be0 + 0x20) + 0x135) & 1) == 0) {
          FUN_032934b8();
        }
        FUN_0496e460();
        auVar11 = FUN_049b1d24(auVar11._0_8_,auVar11._8_8_,*(undefined8 *)PTR_DAT_07290300);
        *unaff_x19 = auVar11;
      }
    }
  }
  return;
}


