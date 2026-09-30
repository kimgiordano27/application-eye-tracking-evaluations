/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<TeamWindData>$$Deserialize
ENTRY_POINT: 0415fa8c
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined1  [16]
MagicaCloth2_ExSimpleNativeArray<TeamWindData>__Deserialize
          (long param_1,long param_2,undefined8 param_3,undefined8 param_4,void *param_5,
          long param_6)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  void *__src;
  undefined8 uVar6;
  long lVar7;
  ulong __n;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_20 [8];
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lVar4 = tpidr_el0;
  lStack_8 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 0415fa80 with catch @ 0415faa8 */
                    /* try { // try from 0415fab4 to 0425fabb has its CatchHandler @ 0415fad0 */
  lVar7 = *(long *)(param_6 + 0x38);
                    /* try { // try from 0415fabc to 0425fac7 has its CatchHandler @ 0415f8fc */
                    /* try { // try from 0415fac8 to 0425facf has its CatchHandler @ 0415fad0 */
  if (lVar7 == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0415fab4 with catch @ 0415fad0
                       catch(type#2 @ 00000000) { ... } // from try @ 0415fac8 with catch @ 0415fad0
                        */
                    /* try { // try from 0415fad4 to 0425fb9f has its CatchHandler @ 0415fad4
                       catch() { ... } // from try @ 0415fad4 with catch @ 0415fad4
                       catch() { ... } // from try @ 0415fbe8 with catch @ 0415fad4
                       catch() { ... } // from try @ 0415fc40 with catch @ 0415fad4
                       catch() { ... } // from try @ 0415fc78 with catch @ 0415fad4 */
    FUN_0335b6c8(&DAT_083e3ce0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083d23b8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0844ac78,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0842ec78,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083d42a0,1);
    DataMemoryBarrier(2,3);
    lVar7 = *(long *)(param_6 + 0x38);
    if (lVar7 == 0) {
      FUN_0338f674(param_6);
      lVar7 = *(long *)(param_6 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar7 + 8) + 0xfc);
  uStack_18 = 0;
  uStack_10 = 0;
  if (param_2 == 0) {
LAB_0415fd10:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  uVar5 = FUN_05db133c(param_2,param_4,&uStack_10,DAT_083e3ce0);
  uVar6 = uStack_10;
  if ((uVar5 & 1) == 0) {
    memset(param_5,0,__n);
    uVar6 = FUN_0666ec64(DAT_0844ac78,param_4,DAT_0842ec78,0);
    if (*(int *)(DAT_083d42a0 + 0xe0) == 0) {
      FUN_033b9870(DAT_083d42a0);
    }
    auVar9 = FUN_0784f81c(uVar6,0);
  }
  else {
    uStack_18 = 0;
    lVar7 = *(long *)(param_1 + 0x10);
                    /* try { // try from 0415fba0 to 0425fba7 has its CatchHandler @ 0415fc24 */
    uVar8 = *(undefined8 *)(*(long *)(param_6 + 0x38) + 0x10);
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar8 = FUN_0683eca4(uVar8,0);
    if (lVar7 == 0) goto LAB_0415fd10;
                    /* try { // try from 0415fbc0 to 0425fbc3 has its CatchHandler @ 0415fc1c */
    auVar9 = FUN_0786b56c(lVar7,uVar6,uVar8,param_3,&uStack_18,0);
    uVar6 = uStack_18;
    lVar7 = *(long *)(*(long *)(param_6 + 0x38) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618(lVar7);
    }
    __src = (void *)FUN_033d1c38(uVar6,lVar7,auStack_20 + -(__n + 0xf & 0x1fffffff0));
    memcpy(param_5,__src,__n);
    if ((*(byte *)(*(long *)(*(long *)(param_6 + 0x38) + 8) + 0x135) & 1) == 0) {
      FUN_0338f618();
    }
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)param_5 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)param_5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  if (*(long *)(lVar4 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return auVar9;
}


