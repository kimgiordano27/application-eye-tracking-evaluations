/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$CheckForCircularReference
ENTRY_POINT: 01bc685c
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CheckForCircularReference
               (ulong param_1,undefined1 param_2 [16],float param_3,float param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined4 *puVar4;
  undefined8 *unaff_x21;
  long *plVar5;
  undefined8 *unaff_x22;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack0000000000000004;
  undefined4 uStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e25810);
    thunk_FUN_0159f088(PTR_DAT_06e4d270);
    *(undefined1 *)(unaff_x20 + 0xd06) = 1;
  }
  puVar4 = (undefined4 *)(param_5 + 0x28);
  lVar2 = FUN_0160edfc(*unaff_x21,*puVar4);
  plVar5 = (long *)(param_5 + 0xc0);
  *plVar5 = lVar2;
  thunk_FUN_01656ef8(plVar5,lVar2);
  uVar3 = FUN_0160edfc(*unaff_x22,*puVar4);
  *(undefined8 *)(param_5 + 200) = uVar3;
  thunk_FUN_01656ef8((undefined8 *)(param_5 + 200),uVar3);
  uStack000000000000000c =
       FUN_01bc65e8(*(undefined4 *)(param_5 + 0xb4),*(undefined1 *)(param_5 + 0xb9));
  puVar1 = PTR_DAT_06e1a840;
  lVar2 = *plVar5;
  fStack0000000000000004 = param_4;
  if (lVar2 != 0) {
    lVar8 = 0;
    uVar6 = 0;
    while( true ) {
      if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar6) {
        return;
      }
      lVar2 = thunk_FUN_02ec4de8(puVar4,uVar6 & 0xffffffff,0);
      if (lVar2 == 0) break;
      lVar9 = *(long *)(param_5 + 0xc0);
      lVar7 = *(long *)(param_5 + 0x18);
      fVar15 = param_3;
      fVar19 = fStack0000000000000004;
      FUN_04f1c5f8(uStack000000000000000c,lVar2,0);
      if ((lVar7 == 0) || (uVar10 = Fusion_SceneLoadDoneArgs___ctor(lVar7,0), lVar9 == 0)) break;
      if (*(uint *)(lVar9 + 0x18) <= uVar6) {
LAB_01bc6ae8:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      lVar9 = lVar9 + lVar8;
      *(undefined4 *)(lVar9 + 0x20) = uVar10;
      *(float *)(lVar9 + 0x24) = fVar15;
      *(float *)(lVar9 + 0x28) = fVar19;
      if (*(long *)(param_5 + 0x20) == 0) break;
      lVar9 = *(long *)(param_5 + 200);
      fVar11 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(*(long *)(param_5 + 0x20),0)
      ;
      fVar16 = fVar15;
      fVar20 = fVar19;
      fVar12 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar2,0);
      fVar17 = fVar16;
      fVar21 = fVar20;
      if (DAT_0722a395 == '\0') {
        thunk_FUN_0159f088(puVar1);
        DAT_0722a395 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      if (*(long *)(param_5 + 0x20) == 0) break;
      fVar13 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(*(long *)(param_5 + 0x20),0)
      ;
      if (*(long *)(param_5 + 0x10) == 0) break;
      fVar18 = fVar17;
      fVar22 = fVar21;
      fVar14 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(*(long *)(param_5 + 0x10),0)
      ;
      if (DAT_0722a395 == '\0') {
        thunk_FUN_0159f088(puVar1);
                    /* try { // try from 01bc6a0c to 01cc6b0f has its CatchHandler @ 01bc6a0c
                       catch() { ... } // from try @ 01bc6a0c with catch @ 01bc6a0c
                       catch() { ... } // from try @ 01bc6b18 with catch @ 01bc6a0c
                       catch() { ... } // from try @ 01bc6ce0 with catch @ 01bc6a0c
                       catch() { ... } // from try @ 01bc6d10 with catch @ 01bc6a0c
                       catch() { ... } // from try @ 01bc6d50 with catch @ 01bc6a0c */
        DAT_0722a395 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      if (lVar9 == 0) break;
      if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_01bc6ae8;
      *(float *)(lVar9 + uVar6 * 4 + 0x20) =
           1.0 - SQRT((fVar19 - fVar20) * (fVar19 - fVar20) +
                      (fVar11 - fVar12) * (fVar11 - fVar12) + (fVar15 - fVar16) * (fVar15 - fVar16))
                 / SQRT((fVar21 - fVar22) * (fVar21 - fVar22) +
                        (fVar13 - fVar14) * (fVar13 - fVar14) +
                        (fVar17 - fVar18) * (fVar17 - fVar18));
      lVar2 = *plVar5;
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0xc;
      if (lVar2 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


