/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$remove_OnDeletePlayerCustomPropertiesRequestEvent
ENTRY_POINT: 05232844
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2
*/


void PlayFab_Events_PlayFabEvents__remove_OnDeletePlayerCustomPropertiesRequestEvent
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  
  if (*(int *)(**(long **)(param_1 + 0x2e0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_05e9a950(0);
  cVar1 = *(char *)(unaff_x19 + 0x72);
  uVar3 = *(undefined8 *)
           System_Collections_Generic_Dictionary<ulong,_TMP_DynamicFontAssetUtilities_FontReference>_TypeInfo
  ;
  *(char *)(unaff_x19 + 0x72) = cVar1 + '\x01';
  lVar4 = thunk_FUN_02d8a638(uVar3);
  FUN_05044d4c(lVar4,0);
  *(char *)(lVar4 + 0x10) = cVar1;
  *(undefined1 *)(lVar4 + 0x44) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x48),0);
                    /* try { // try from 052328a0 to 053328af has its CatchHandler @ 052328b0 */
  cVar1 = *(char *)(unaff_x19 + 0x70);
  lVar5 = FUN_05eddb70();
                    /* catch() { ... } // from try @ 05232820 with catch @ 052328b0
                       catch() { ... } // from try @ 052328a0 with catch @ 052328b0 */
  if (cVar1 == '\0') {
    if (lVar5 != 0) {
      uVar6 = FUN_05ef00fc(lVar5,0);
      lVar5 = FUN_05eddb70();
      if (lVar5 != 0) {
        FUN_05ef00fc(lVar5,0);
        *(undefined4 *)(unaff_x19 + 0x40) = uVar6;
        *(undefined4 *)(unaff_x19 + 0x44) = param_4;
        lVar5 = FUN_05eddb70();
        if (lVar5 != 0) {
          uVar6 = FUN_05ef08f8(lVar5,0);
          lVar5 = FUN_05eddb70();
          if (lVar5 != 0) {
            FUN_05ef08f8(lVar5,0);
            uVar7 = *(undefined4 *)(unaff_x19 + 0x40);
            uVar9 = *(undefined4 *)(unaff_x19 + 0x44);
            *(undefined4 *)(unaff_x19 + 0x48) = uVar6;
            *(undefined4 *)(unaff_x19 + 0x4c) = param_4;
            *(undefined4 *)(lVar4 + 0x18) = 0;
            *(undefined4 *)(lVar4 + 0x14) = uVar7;
            *(undefined4 *)(lVar4 + 0x1c) = uVar9;
            uVar6 = *(undefined4 *)(unaff_x19 + 0x48);
            uVar7 = *(undefined4 *)(unaff_x19 + 0x4c);
            *(undefined4 *)(lVar4 + 0x24) = 0;
            *(undefined4 *)(lVar4 + 0x20) = uVar6;
            *(undefined4 *)(lVar4 + 0x28) = uVar7;
            fVar10 = *(float *)(unaff_x19 + 0x48);
            fVar11 = *(float *)(unaff_x19 + 0x4c);
            fVar13 = *(float *)(unaff_x19 + 0x40);
            fVar14 = *(float *)(unaff_x19 + 0x44);
            *(undefined4 *)(lVar4 + 0x30) = 0;
            *(float *)(lVar4 + 0x2c) = fVar13 - fVar10 * 0.5;
            *(float *)(lVar4 + 0x34) = fVar14 - fVar11 * 0.5;
            fVar10 = *(float *)(unaff_x19 + 0x44) + *(float *)(unaff_x19 + 0x4c) * 0.5;
            uVar8 = (ulong)(uint)(*(float *)(unaff_x19 + 0x40) + *(float *)(unaff_x19 + 0x48) * 0.5)
            ;
            goto LAB_05232a2c;
          }
        }
      }
    }
  }
  else {
                    /* try { // try from 052328b4 to 053328b7 has its CatchHandler @ 052328c0 */
    if (lVar5 != 0) {
                    /* try { // try from 052328b8 to 053328c3 has its CatchHandler @ 05232600 */
      uVar6 = FUN_05ef00fc(lVar5,0);
                    /* catch() { ... } // from try @ 052328b4 with catch @ 052328c0 */
      lVar5 = FUN_05eddb70();
      if (lVar5 != 0) {
        FUN_05ef00fc(lVar5,0);
        *(undefined4 *)(unaff_x19 + 0x40) = uVar6;
        *(undefined4 *)(unaff_x19 + 0x44) = param_3;
        lVar5 = FUN_05eddb70();
        if (lVar5 != 0) {
          uVar6 = FUN_05ef08f8(lVar5,0);
          lVar5 = FUN_05eddb70();
          if (lVar5 != 0) {
            FUN_05ef08f8(lVar5,0);
            uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
            *(undefined4 *)(unaff_x19 + 0x48) = uVar6;
            *(undefined4 *)(unaff_x19 + 0x4c) = param_3;
            *(undefined4 *)(lVar4 + 0x1c) = 0;
            *(undefined8 *)(lVar4 + 0x14) = uVar3;
            uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
            *(undefined4 *)(lVar4 + 0x28) = 0;
            *(undefined8 *)(lVar4 + 0x20) = uVar3;
            uVar12 = *(undefined8 *)(unaff_x19 + 0x40);
            uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
            *(undefined4 *)(lVar4 + 0x34) = 0;
            *(ulong *)(lVar4 + 0x2c) =
                 CONCAT44((float)((ulong)uVar12 >> 0x20) - (float)((ulong)uVar3 >> 0x20) * 0.5,
                          (float)uVar12 - (float)uVar3 * 0.5);
            uVar8 = CONCAT44((float)((ulong)*(undefined8 *)(unaff_x19 + 0x40) >> 0x20) +
                             (float)((ulong)*(undefined8 *)(unaff_x19 + 0x48) >> 0x20) * 0.5,
                             (float)*(undefined8 *)(unaff_x19 + 0x40) +
                             (float)*(undefined8 *)(unaff_x19 + 0x48) * 0.5);
            fVar10 = 0.0;
LAB_05232a2c:
            puVar2 = 
            System_Collections_Generic_Dictionary<Vector3,_ValueTuple<Vector3,_Vector3>>_TypeInfo;
            *(ulong *)(lVar4 + 0x38) = uVar8;
            *(float *)(lVar4 + 0x40) = fVar10;
            FUN_05232be0();
            lVar5 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
            FUN_05044d4c(lVar5,0);
            *(long *)(lVar5 + 0x10) = lVar4;
            thunk_FUN_02dc1ef0((long *)(lVar5 + 0x10),lVar4);
            *(long *)(unaff_x19 + 0x60) = lVar5;
            thunk_FUN_02dc1ef0((long *)(unaff_x19 + 0x60),lVar5);
            *(undefined1 *)(unaff_x19 + 0x71) = 0;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


