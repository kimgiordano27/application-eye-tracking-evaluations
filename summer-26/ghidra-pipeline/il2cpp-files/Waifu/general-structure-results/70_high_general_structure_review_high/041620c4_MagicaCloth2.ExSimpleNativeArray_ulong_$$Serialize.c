/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<ulong>$$Serialize
ENTRY_POINT: 041620c4
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void MagicaCloth2_ExSimpleNativeArray<ulong>__Serialize(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong in_x9;
  long in_x10;
  long in_x11;
  long in_x12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  puVar1 = (ulong *)(in_x10 + param_1 * 8 + in_x11);
  do {
                    /* try { // try from 041620d4 to 042620db has its CatchHandler @ 04162174 */
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | in_x12 << (in_x9 & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (*(long **)(unaff_x22 + 0x10) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  plVar4 = (long *)FUN_0339a700(**(long **)(unaff_x22 + 0x10) + 0x20);
                    /* try { // try from 041620f4 to 042620f7 has its CatchHandler @ 0416216c */
  uVar5 = 0;
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  }
  if (3 < *(uint *)(unaff_x20 + 0x18)) {
    puVar8 = (undefined8 *)(unaff_x20 + 0x38);
    *puVar8 = uVar5;
    if (*(int *)(unaff_x21 + 0xcd0) != 0) {
                    /* try { // try from 04162130 to 04262137 has its CatchHandler @ 04162170 */
                    /* try { // try from 04162138 to 0426218b has its CatchHandler @ 04161ff0 */
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar8 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar5 = FUN_0335b6c8(&DAT_08430270,1);
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 041620f4 with catch @ 0416216c
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 04162130 with catch @ 04162170
                        */
    if (4 < *(uint *)(unaff_x20 + 0x18)) {
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 041620d4 with catch @ 04162174
                        */
      puVar8 = (undefined8 *)(unaff_x20 + 0x40);
      *puVar8 = uVar5;
      if (*(int *)(unaff_x21 + 0xcd0) != 0) {
                    /* try { // try from 0416218c to 0426218f has its CatchHandler @ 041621b4 */
                    /* try { // try from 04162190 to 042621bf has its CatchHandler @ 04161ff0 */
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar8 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8);
      lVar6 = FUN_0335b6c8(&DAT_083d23b8,1);
      if (*(int *)(lVar6 + 0xe0) == 0) {
        FUN_033b9870();
      }
      plVar4 = (long *)FUN_0683eca4(uVar5,0);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170),0);
      }
      FUN_02e06560();
      uVar5 = FUN_0666ee4c();
      FUN_033d1ba8(&DAT_083cdc00);
      uVar7 = thunk_FUN_03398a84();
      FUN_0682c048(uVar7,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar7);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


