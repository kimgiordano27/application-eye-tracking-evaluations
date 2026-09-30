/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 01bc6850
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined4 *puVar4;
  long unaff_x21;
  undefined8 *puVar5;
  long *plVar6;
  long unaff_x22;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
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
  float fVar23;
  float fVar24;
  float fStack0000000000000004;
  undefined4 uStack000000000000000c;
  
  puVar5 = *(undefined8 **)(unaff_x21 + 0x270);
  puVar7 = *(undefined8 **)(unaff_x22 + 0x810);
  if ((*(byte *)(unaff_x20 + 0xd06) & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e25810);
    thunk_FUN_0159f088(PTR_DAT_06e4d270);
    *(undefined1 *)(unaff_x20 + 0xd06) = 1;
  }
  puVar4 = (undefined4 *)(param_4 + 0x28);
  lVar2 = FUN_0160edfc(*puVar5,*puVar4);
  plVar6 = (long *)(param_4 + 0xc0);
  *plVar6 = lVar2;
  thunk_FUN_01656ef8(plVar6,lVar2);
  uVar3 = FUN_0160edfc(*puVar7,*puVar4);
  *(undefined8 *)(param_4 + 200) = uVar3;
  thunk_FUN_01656ef8((undefined8 *)(param_4 + 200),uVar3);
  uStack000000000000000c =
       FUN_01bc65e8(*(undefined4 *)(param_4 + 0xb4),*(undefined1 *)(param_4 + 0xb9));
  puVar1 = PTR_DAT_06e1a840;
  lVar2 = *plVar6;
  fStack0000000000000004 = param_3;
  if (lVar2 != 0) {
    lVar10 = 0;
    uVar8 = 0;
    while( true ) {
      if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar8) {
        return;
      }
      lVar2 = thunk_FUN_02ec4de8(puVar4,uVar8 & 0xffffffff,0);
      if (lVar2 == 0) break;
      lVar11 = *(long *)(param_4 + 0xc0);
      lVar9 = *(long *)(param_4 + 0x18);
      fVar17 = param_2;
      fVar21 = fStack0000000000000004;
      FUN_04f1c5f8(uStack000000000000000c,lVar2,0);
      if ((lVar9 == 0) || (uVar12 = Fusion_SceneLoadDoneArgs___ctor(lVar9,0), lVar11 == 0)) break;
      if (*(uint *)(lVar11 + 0x18) <= uVar8) {
LAB_01bc6ae8:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      lVar11 = lVar11 + lVar10;
      *(undefined4 *)(lVar11 + 0x20) = uVar12;
      *(float *)(lVar11 + 0x24) = fVar17;
      *(float *)(lVar11 + 0x28) = fVar21;
      if (*(long *)(param_4 + 0x20) == 0) break;
      lVar11 = *(long *)(param_4 + 200);
      fVar13 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(*(long *)(param_4 + 0x20),0)
      ;
      fVar18 = fVar17;
      fVar22 = fVar21;
      fVar14 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar2,0);
      fVar19 = fVar18;
      fVar23 = fVar22;
      if (DAT_0722a395 == '\0') {
        thunk_FUN_0159f088(puVar1);
        DAT_0722a395 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      if (*(long *)(param_4 + 0x20) == 0) break;
      fVar15 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(*(long *)(param_4 + 0x20),0)
      ;
      if (*(long *)(param_4 + 0x10) == 0) break;
      fVar20 = fVar19;
      fVar24 = fVar23;
      fVar16 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(*(long *)(param_4 + 0x10),0)
      ;
      if (DAT_0722a395 == '\0') {
        thunk_FUN_0159f088(puVar1);
        DAT_0722a395 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      if (lVar11 == 0) break;
      if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_01bc6ae8;
      *(float *)(lVar11 + uVar8 * 4 + 0x20) =
           1.0 - SQRT((fVar21 - fVar22) * (fVar21 - fVar22) +
                      (fVar13 - fVar14) * (fVar13 - fVar14) + (fVar17 - fVar18) * (fVar17 - fVar18))
                 / SQRT((fVar23 - fVar24) * (fVar23 - fVar24) +
                        (fVar15 - fVar16) * (fVar15 - fVar16) +
                        (fVar19 - fVar20) * (fVar19 - fVar20));
      lVar2 = *plVar6;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0xc;
      if (lVar2 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


