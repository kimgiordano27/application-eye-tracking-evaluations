/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<ExBitFlag8>$$Deserialize
ENTRY_POINT: 0415b78c
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long MagicaCloth2_ExSimpleNativeArray<ExBitFlag8>__Deserialize(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  long unaff_x25;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000008;
  
  do {
    pcVar6 = *(code **)(unaff_x19 + 0x618);
    if (pcVar6 == (code *)0x0) {
      pcVar6 = (code *)FUN_033d1b68(
                                   "UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)"
                                   );
      *(code **)(unaff_x19 + 0x618) = pcVar6;
    }
    lVar4 = (*pcVar6)();
    uVar5 = FUN_079a4038(lVar4,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    puVar7 = (undefined8 *)(unaff_x21 + unaff_x23 * 8 + 0x20);
    *puVar7 = uVar5;
    if (*(int *)(unaff_x27 + 0xcd0) != 0) {
                    /* try { // try from 0415b7e4 to 0425b80b has its CatchHandler @ 0415b93c */
      puVar1 = (ulong *)(unaff_x29 + ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + unaff_x25);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lVar4 != 0) {
      pcVar6 = *(code **)(unaff_x28 + 0x1b0);
      if (pcVar6 == (code *)0x0) {
        pcVar6 = (code *)FUN_033d1b68("UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)");
        *(code **)(unaff_x28 + 0x1b0) = pcVar6;
      }
      (*pcVar6)(lVar4);
    }
    unaff_x23 = unaff_x23 + 1;
  } while (unaff_x23 != unaff_x22);
                    /* try { // try from 0415b840 to 0425b86b has its CatchHandler @ 0415b938 */
  lVar4 = *(long *)(*(long *)(in_stack_00000008 + 0x38) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    FUN_0338f618(lVar4);
  }
  if (unaff_x21 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_0339898c();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1fec();
    }
  }
  return lVar4;
}


