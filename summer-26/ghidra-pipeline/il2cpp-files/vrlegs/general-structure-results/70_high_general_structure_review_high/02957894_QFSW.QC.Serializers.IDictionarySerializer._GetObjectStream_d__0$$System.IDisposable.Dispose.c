/*
FUNCTION_NAME: QFSW.QC.Serializers.IDictionarySerializer.<GetObjectStream>d__0$$System.IDisposable.Dispose
ENTRY_POINT: 02957894
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void QFSW_QC_Serializers_IDictionarySerializer_<GetObjectStream>d__0__System_IDisposable_Dispose
               (undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  
  uVar2 = FUN_036c0d90(0);
  lVar1 = FUN_036cbb80();
  if (lVar1 != 0) {
    FUN_036dce04(uVar2,unaff_d9,unaff_d10,param_1,lVar1,0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_036db02c(*(long *)(unaff_x19 + 0x20),0);
      lVar1 = FUN_036cbb80();
      if (lVar1 != 0) {
        FUN_036db02c(lVar1,0);
        uVar2 = FUN_036c10a8(0);
        if (DAT_0411f1df == '\0') {
          FUN_01ab69ac(PTR_DAT_03cbded8);
          DAT_0411f1df = '\x01';
        }
        lVar1 = *(long *)(*(long *)PTR_DAT_03cbded8 + 0xb8);
        FUN_036c0d90(uVar2,unaff_d9,unaff_d10,*(undefined4 *)(lVar1 + 0x18),
                     *(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_036dce04(*(long *)(unaff_x19 + 0x20),0);
          *(undefined4 *)(unaff_x19 + 0x58) = 0;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


