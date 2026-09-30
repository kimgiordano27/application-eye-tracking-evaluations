/*
FUNCTION_NAME: Unity.Netcode.BufferSerializerReader$$SerializeValue<HalfVector3>
ENTRY_POINT: 04dacec0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_Netcode_BufferSerializerReader__SerializeValue<HalfVector3>(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint unaff_w19;
  long unaff_x20;
  void *unaff_x21;
  
  FUN_03d2d2b0(PTR_DAT_091a0c18);
  if (*(long *)(unaff_x20 + 0x38) == 0) {
    FUN_03d8f2c8();
  }
  uVar1 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue();
  if (uVar1 <= unaff_w19) {
    thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
    uVar6 = thunk_FUN_03d2ef40();
    uVar5 = thunk_FUN_03d1e194(PTR_DAT_091b4480);
    FUN_070ccddc(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar6);
  }
  plVar2 = (long *)thunk_FUN_03d2ee44();
  if (plVar2 == (long *)0x0) {
    FUN_03d2d34c();
    return;
  }
  memcpy(&stack0x00000008,unaff_x21,0x88);
  lVar3 = thunk_FUN_03d2eb70(**(undefined8 **)(unaff_x20 + 0x38),&stack0x00000008);
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_03d2ee44(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar6,0);
  }
  if (unaff_w19 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)unaff_w19 + 4] = lVar3;
    thunk_FUN_03d1023c(plVar2 + (long)(int)unaff_w19 + 4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


