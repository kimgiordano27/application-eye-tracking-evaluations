/*
FUNCTION_NAME: Obi.ObiNativeList<TriangleMeshHeader>$$Upload<TriangleMeshHeader>
ENTRY_POINT: 01900b90
PROGRAM: simulator-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Obi_ObiNativeList<TriangleMeshHeader>__Upload<TriangleMeshHeader>(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  char *unaff_x19;
  ulong unaff_x21;
  ulong unaff_x22;
  int unaff_w23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  
  do {
    uVar4 = param_2 + unaff_x22;
    unaff_x22 = uVar4;
    if (param_2 != param_1 + -1) {
      close(unaff_w23);
      if (unaff_x21 < uVar4) {
        (**(code **)(unaff_x26 + 0x458))();
      }
      if ((unaff_x21 <= uVar4) && (uVar4 < *(ulong *)(unaff_x24 + 0x720))) {
        lVar5 = *(long *)(unaff_x25 + 0x4d8);
        *(undefined1 *)(lVar5 + uVar4) = 0;
        return lVar5;
      }
      while (*(ulong *)(unaff_x24 + 0x720) <= uVar4) {
        FUN_018fdfe8(*(undefined8 *)(unaff_x25 + 0x4d8));
        uVar2 = *(ulong *)(unaff_x24 + 0x720);
        if (uVar2 <= uVar4) {
          do {
            uVar1 = uVar2 << 1;
            uVar2 = uVar2 << 1;
          } while (uVar1 <= uVar4);
          *(ulong *)(unaff_x24 + 0x720) = uVar2;
        }
        uVar3 = FUN_018f4eb4();
        *(undefined8 *)(unaff_x25 + 0x4d8) = uVar3;
        uVar4 = FUN_01900a6c();
        if (uVar4 == 0) {
          return 0;
        }
        if (*(long *)(unaff_x25 + 0x4d8) == 0) {
          return 0;
        }
      }
      unaff_w23 = open(unaff_x19,0);
      if (unaff_w23 == -1) {
        return 0;
      }
      param_1 = *(long *)(unaff_x24 + 0x720);
      unaff_x22 = 0;
      unaff_x21 = uVar4;
    }
    param_2 = FUN_019009f0(unaff_w23,*(undefined8 *)(unaff_x25 + 0x4d8),param_1 + -1);
    if (param_2 < 1) {
      close(unaff_w23);
      return 0;
    }
    param_1 = *(long *)(unaff_x24 + 0x720);
  } while( true );
}


