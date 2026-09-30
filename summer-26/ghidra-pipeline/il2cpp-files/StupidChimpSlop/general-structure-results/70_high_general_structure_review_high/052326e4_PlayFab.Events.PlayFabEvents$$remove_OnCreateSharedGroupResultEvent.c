/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$remove_OnCreateSharedGroupResultEvent
ENTRY_POINT: 052326e4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_1
*/


void PlayFab_Events_PlayFabEvents__remove_OnCreateSharedGroupResultEvent
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 in_stack_00000008;
  
  uVar3 = PlayFab_Events_PlayFabEvents__remove_OnExecuteCloudScriptRequestEvent();
  puVar2 = PTR_DAT_06646730;
  if ((uVar3 & 1) == 0) {
                    /* try { // try from 052326ec to 053326f7 has its CatchHandler @ 052327f8 */
                    /* try { // try from 052326fc to 05332707 has its CatchHandler @ 05232808 */
    if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
                    /* try { // try from 05232708 to 0533273f has its CatchHandler @ 05232600 */
    uVar3 = FUN_05ea37e4(0);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06646310,5);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) != 0) {
                    /* try { // try from 05232740 to 0533274b has its CatchHandler @ 052327e4 */
          *(undefined8 *)(lVar4 + 0x20) =
               *(undefined8 *)
                System_Collections_Generic_Dictionary<VectorImage,_VectorImageRenderInfo>_TypeInfo;
          thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x20));
                    /* try { // try from 05232758 to 05332777 has its CatchHandler @ 052327f4 */
          in_stack_00000008._4_4_ = 0xfa - (uint)*(byte *)(unaff_x19 + 0x20);
          uVar5 = FUN_05000654((long)&stack0x00000008 + 4,0);
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar4 + 0x28) = uVar5;
                    /* try { // try from 05232788 to 05332793 has its CatchHandler @ 052327dc */
            thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x28),uVar5);
            if (2 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x30) =
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<VisualElement,_DataSourceContext>_TypeInfo
              ;
              thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x30));
              in_stack_00000008._4_4_ = *(int *)(unaff_x19 + 0x5c);
              uVar5 = FUN_05000654((long)&stack0x00000008 + 4,0);
              if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
                *(undefined8 *)(lVar4 + 0x38) = uVar5;
                thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x38),uVar5);
                if (4 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_06646bb0;
                  thunk_FUN_02dc1ef0();
                  uVar5 = FUN_04e80ce4(lVar4,0);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_02dabd98(*(long *)puVar2);
                  }
                  FUN_05ea29a0(uVar5,0);
                  return;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      goto LAB_05232a9c;
    }
    if (*(int *)(*(long *)PTR_DAT_066462e0 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05e9a950(0);
  }
  cVar1 = *(char *)(unaff_x19 + 0x72);
  uVar5 = *(undefined8 *)
           System_Collections_Generic_Dictionary<ulong,_TMP_DynamicFontAssetUtilities_FontReference>_TypeInfo
  ;
  *(char *)(unaff_x19 + 0x72) = cVar1 + '\x01';
  lVar4 = thunk_FUN_02d8a638(uVar5);
  FUN_05044d4c(lVar4,0);
  *(char *)(lVar4 + 0x10) = cVar1;
  *(undefined1 *)(lVar4 + 0x44) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  thunk_FUN_02dc1ef0((undefined8 *)(lVar4 + 0x48),0);
  cVar1 = *(char *)(unaff_x19 + 0x70);
  lVar6 = FUN_05eddb70();
  if (cVar1 == '\0') {
    if (lVar6 != 0) {
      uVar7 = FUN_05ef00fc(lVar6,0);
      lVar6 = FUN_05eddb70();
      if (lVar6 != 0) {
        FUN_05ef00fc(lVar6,0);
        *(undefined4 *)(unaff_x19 + 0x40) = uVar7;
        *(undefined4 *)(unaff_x19 + 0x44) = param_3;
        lVar6 = FUN_05eddb70();
        if (lVar6 != 0) {
          uVar7 = FUN_05ef08f8(lVar6,0);
          lVar6 = FUN_05eddb70();
          if (lVar6 != 0) {
            FUN_05ef08f8(lVar6,0);
            uVar8 = *(undefined4 *)(unaff_x19 + 0x40);
            uVar9 = *(undefined4 *)(unaff_x19 + 0x44);
            *(undefined4 *)(unaff_x19 + 0x48) = uVar7;
            *(undefined4 *)(unaff_x19 + 0x4c) = param_3;
            *(undefined4 *)(lVar4 + 0x18) = 0;
            *(undefined4 *)(lVar4 + 0x14) = uVar8;
            *(undefined4 *)(lVar4 + 0x1c) = uVar9;
            uVar7 = *(undefined4 *)(unaff_x19 + 0x48);
            uVar8 = *(undefined4 *)(unaff_x19 + 0x4c);
            *(undefined4 *)(lVar4 + 0x24) = 0;
            *(undefined4 *)(lVar4 + 0x20) = uVar7;
            *(undefined4 *)(lVar4 + 0x28) = uVar8;
            fVar10 = *(float *)(unaff_x19 + 0x48);
            fVar11 = *(float *)(unaff_x19 + 0x4c);
            fVar13 = *(float *)(unaff_x19 + 0x40);
            fVar14 = *(float *)(unaff_x19 + 0x44);
            *(undefined4 *)(lVar4 + 0x30) = 0;
            *(float *)(lVar4 + 0x2c) = fVar13 - fVar10 * 0.5;
            *(float *)(lVar4 + 0x34) = fVar14 - fVar11 * 0.5;
            fVar10 = *(float *)(unaff_x19 + 0x44) + *(float *)(unaff_x19 + 0x4c) * 0.5;
            uVar3 = (ulong)(uint)(*(float *)(unaff_x19 + 0x40) + *(float *)(unaff_x19 + 0x48) * 0.5)
            ;
            goto LAB_05232a2c;
          }
        }
      }
    }
  }
  else if (lVar6 != 0) {
    uVar7 = FUN_05ef00fc(lVar6,0);
    lVar6 = FUN_05eddb70();
    if (lVar6 != 0) {
      FUN_05ef00fc(lVar6,0);
      *(undefined4 *)(unaff_x19 + 0x40) = uVar7;
      *(undefined4 *)(unaff_x19 + 0x44) = param_2;
      lVar6 = FUN_05eddb70();
      if (lVar6 != 0) {
        uVar7 = FUN_05ef08f8(lVar6,0);
        lVar6 = FUN_05eddb70();
        if (lVar6 != 0) {
          FUN_05ef08f8(lVar6,0);
          uVar5 = *(undefined8 *)(unaff_x19 + 0x40);
          *(undefined4 *)(unaff_x19 + 0x48) = uVar7;
          *(undefined4 *)(unaff_x19 + 0x4c) = param_2;
          *(undefined4 *)(lVar4 + 0x1c) = 0;
          *(undefined8 *)(lVar4 + 0x14) = uVar5;
          uVar5 = *(undefined8 *)(unaff_x19 + 0x48);
          *(undefined4 *)(lVar4 + 0x28) = 0;
          *(undefined8 *)(lVar4 + 0x20) = uVar5;
          uVar12 = *(undefined8 *)(unaff_x19 + 0x40);
          uVar5 = *(undefined8 *)(unaff_x19 + 0x48);
          *(undefined4 *)(lVar4 + 0x34) = 0;
          *(ulong *)(lVar4 + 0x2c) =
               CONCAT44((float)((ulong)uVar12 >> 0x20) - (float)((ulong)uVar5 >> 0x20) * 0.5,
                        (float)uVar12 - (float)uVar5 * 0.5);
          uVar3 = CONCAT44((float)((ulong)*(undefined8 *)(unaff_x19 + 0x40) >> 0x20) +
                           (float)((ulong)*(undefined8 *)(unaff_x19 + 0x48) >> 0x20) * 0.5,
                           (float)*(undefined8 *)(unaff_x19 + 0x40) +
                           (float)*(undefined8 *)(unaff_x19 + 0x48) * 0.5);
          fVar10 = 0.0;
LAB_05232a2c:
          puVar2 = 
          System_Collections_Generic_Dictionary<Vector3,_ValueTuple<Vector3,_Vector3>>_TypeInfo;
          *(ulong *)(lVar4 + 0x38) = uVar3;
          *(float *)(lVar4 + 0x40) = fVar10;
          FUN_05232be0();
          lVar6 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
          FUN_05044d4c(lVar6,0);
          *(long *)(lVar6 + 0x10) = lVar4;
          thunk_FUN_02dc1ef0((long *)(lVar6 + 0x10),lVar4);
          *(long *)(unaff_x19 + 0x60) = lVar6;
          thunk_FUN_02dc1ef0((long *)(unaff_x19 + 0x60),lVar6);
          *(undefined1 *)(unaff_x19 + 0x71) = 0;
          return;
        }
      }
    }
  }
LAB_05232a9c:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


