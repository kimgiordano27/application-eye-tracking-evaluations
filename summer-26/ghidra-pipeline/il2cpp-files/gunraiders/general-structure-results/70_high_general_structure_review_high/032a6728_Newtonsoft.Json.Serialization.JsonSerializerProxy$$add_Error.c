/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$add_Error
ENTRY_POINT: 032a6728
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__add_Error(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  
  FUN_03313b6c();
  if (unaff_w21 < 0) {
    uVar3 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
    uVar3 = thunk_FUN_01c49334(uVar3,&stack0x0000000c);
    thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
    uVar4 = thunk_FUN_01c496e0();
    uVar5 = thunk_FUN_01c273e8(OVR_OpenVR_IVRChaperone_TypeInfo);
    uVar6 = thunk_FUN_01c273e8(OVR_OpenVR_IVRApplications_TypeInfo);
    FUN_03244804(uVar4,uVar5,uVar3,uVar6,0);
    uVar3 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_Dictionary<Guid,_OVRSpatialAnchor>_TryGetValue__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar4,uVar3);
  }
  if (unaff_w21 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = unaff_w21 + 0x1e;
    if (-1 < unaff_w21 + -1) {
      iVar7 = unaff_w21 + -1;
    }
    iVar7 = (iVar7 >> 5) + 1;
  }
  lVar2 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04232bd8,iVar7);
  *(long *)(unaff_x19 + 0x10) = lVar2;
  *(int *)(unaff_x19 + 0x18) = unaff_w21;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (long)((ulong)uVar1 << 0x20)) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        *(uint *)(lVar2 + 0x20 + uVar8 * 4) = -(unaff_w20 & 1);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)uVar1);
    }
    *(undefined4 *)(unaff_x19 + 0x1c) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


