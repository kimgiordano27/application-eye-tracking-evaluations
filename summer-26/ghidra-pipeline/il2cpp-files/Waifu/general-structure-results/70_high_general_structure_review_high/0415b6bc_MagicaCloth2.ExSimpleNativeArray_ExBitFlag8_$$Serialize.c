/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<ExBitFlag8>$$Serialize
ENTRY_POINT: 0415b6bc
PROGRAM: Waifu-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long MagicaCloth2_ExSimpleNativeArray<ExBitFlag8>__Serialize(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x19;
  long lVar7;
  long *unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong uVar8;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000008;
  
  do {
    puVar1 = &DAT_0873ccb0 + ((ulong)param_1 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | unaff_x24 << ((ulong)param_1 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
      uVar8 = unaff_x23;
    } while (cVar2 != '\0');
    do {
      if (unaff_x26 != 0) {
        pcVar6 = *(code **)(unaff_x25 + 0x1b0);
        if (pcVar6 == (code *)0x0) {
          pcVar6 = (code *)FUN_033d1b68("UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)");
          *(code **)(unaff_x25 + 0x1b0) = pcVar6;
        }
        (*pcVar6)(unaff_x26);
      }
      unaff_x23 = uVar8 + 1;
      if (unaff_x23 == unaff_x22) {
        lVar7 = *(long *)(*(long *)(in_stack_00000008 + 0x38) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          FUN_0338f618(lVar7);
        }
        if (unaff_x21 == (long *)0x0) {
          lVar7 = 0;
        }
        else {
          lVar7 = FUN_0339898c();
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1fec();
          }
        }
        return lVar7;
      }
      pcVar6 = *(code **)(unaff_x28 + 0x618);
      if (pcVar6 == (code *)0x0) {
        pcVar6 = (code *)FUN_033d1b68(
                                     "UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)"
                                     );
        *(code **)(unaff_x28 + 0x618) = pcVar6;
      }
      unaff_x26 = (*pcVar6)();
                    /* try { // try from 0415b668 to 0425b68f has its CatchHandler @ 0415b6a4 */
      lVar7 = FUN_03398a84(*(undefined8 *)(unaff_x29 + 0x828));
      FUN_079aa6b0(lVar7,unaff_x26,0);
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
                    /* try { // try from 0415b690 to 0425b69b has its CatchHandler @ 0415b400 */
                    /* try { // try from 0415b69c to 0425b6a3 has its CatchHandler @ 0415b6a4 */
      if ((lVar7 != 0) &&
         (lVar4 = FUN_0339898c(lVar7,*(undefined8 *)(*unaff_x21 + 0x40)), lVar4 == 0)) {
        uVar5 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(uVar5,0);
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0415b668 with catch @ 0415b6a4
                       catch(type#2 @ 00000000) { ... } // from try @ 0415b69c with catch @ 0415b6a4
                        */
                    /* try { // try from 0415b6a8 to 0425b7e3 has its CatchHandler @ 0415b6a8
                       catch() { ... } // from try @ 0415b6a8 with catch @ 0415b6a8
                       catch() { ... } // from try @ 0415b88c with catch @ 0415b6a8
                       catch() { ... } // from try @ 0415b924 with catch @ 0415b6a8
                       catch() { ... } // from try @ 0415b9c4 with catch @ 0415b6a8 */
      if (*(uint *)(unaff_x21 + 3) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      param_1 = unaff_x21 + uVar8 + 5;
      *param_1 = lVar7;
      uVar8 = unaff_x23;
    } while (*(int *)(unaff_x19 + 0xcd0) == 0);
  } while( true );
}


