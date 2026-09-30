/*
FUNCTION_NAME: FUN_053e3ec0
ENTRY_POINT: 053e3ec0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_7;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x053e42f0) */

void FUN_053e3ec0(long param_1,undefined8 param_2,long *param_3,int param_4,byte param_5,
                 byte param_6,undefined8 param_7,undefined8 param_8,byte param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *puVar12;
  long *plVar13;
  
  puVar1 = PTR_DAT_0631f8b0;
  if ((DAT_066d0a3a & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_LogLevel_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(PTR_DAT_06324138);
    FUN_02b3c81c(PTR_DAT_06324140);
                    /* try { // try from 053e3f44 to 054e3fcb has its CatchHandler @ 053e3f44
                       catch() { ... } // from try @ 053e3f44 with catch @ 053e3f44
                       catch() { ... } // from try @ 053e40c0 with catch @ 053e3f44
                       catch() { ... } // from try @ 053e4104 with catch @ 053e3f44
                       catch() { ... } // from try @ 053e4118 with catch @ 053e3f44
                       catch() { ... } // from try @ 053e416c with catch @ 053e3f44 */
    FUN_02b3c81c(PTR_DAT_06312f90);
    FUN_02b3c81c(PTR_DAT_06324178);
    FUN_02b3c81c(PTR_DAT_06324170);
    FUN_02b3c81c(PTR_DAT_0631f8b0);
    DAT_066d0a3a = 1;
  }
  FUN_053fe204(param_2,*(undefined8 *)puVar1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x10),param_2);
  puVar2 = PTR_DAT_06324178;
  puVar1 = PTR_DAT_06324138;
  if (param_3 != (long *)0x0) {
    uVar4 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06324170);
                    /* try { // try from 053e3fcc to 054e3fdb has its CatchHandler @ 053e411c */
    FUN_037a5cd0(uVar4,*(undefined8 *)puVar2);
    puVar12 = (undefined8 *)(param_1 + 0x48);
    *puVar12 = uVar4;
    thunk_FUN_02bb0e9c(puVar12,uVar4);
    lVar9 = *param_3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 053e4004 to 054e400f has its CatchHandler @ 053e4128 */
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                    /* try { // try from 053e4028 to 054e402b has its CatchHandler @ 053e412c */
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_053e4030;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c(param_3,*(long *)puVar1,0);
LAB_053e4030:
    puVar3 = OVRPlugin_LogLevel_TypeInfo;
    puVar2 = PTR_DAT_06324140;
    puVar1 = PTR_DAT_06312f90;
                    /* try { // try from 053e4034 to 054e403f has its CatchHandler @ 053e4124 */
                    /* try { // try from 053e4040 to 054e4053 has its CatchHandler @ 053e4130 */
    plVar6 = (long *)(*(code *)*puVar5)(param_3,puVar5[1]);
    do {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_053e40b4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
                    /* try { // try from 053e409c to 054e40bf has its CatchHandler @ 053e4120 */
      puVar5 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)puVar1,0);
LAB_053e40b4:
      uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
                    /* try { // try from 053e40c0 to 054e40fb has its CatchHandler @ 053e3f44 */
      if ((uVar10 & 1) == 0) {
        if (plVar6 == (long *)0x0) break;
        lVar9 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_053e41e0;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_053e41c8;
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                    /* try { // try from 053e4110 to 054e4113 has its CatchHandler @ 053e4118 */
                    /* try { // try from 053e4114 to 054e4117 has its CatchHandler @ 053e4120 */
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_053e4118;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
                    /* try { // try from 053e40fc to 054e40ff has its CatchHandler @ 053e4138 */
                    /* try { // try from 053e4100 to 054e4103 has its CatchHandler @ 053e4134 */
                    /* try { // try from 053e4104 to 054e410f has its CatchHandler @ 053e3f44 */
      puVar5 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)puVar2,0);
LAB_053e4118:
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053e4110 with catch @ 053e4118
                       try { // try from 053e4118 to 054e4153 has its CatchHandler @ 053e3f44 */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053e3fcc with catch @ 053e411c
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053e409c with catch @ 053e4120
                       catch(type#1 @ 05fbf508) { ... } // from try @ 053e4114 with catch @ 053e4120
                        */
      uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053e4034 with catch @ 053e4124
                        */
      plVar13 = (long *)*puVar12;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053e4004 with catch @ 053e4128
                        */
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053e4028 with catch @ 053e412c
                        */
      lVar9 = *plVar13;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053e4040 with catch @ 053e4130
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053e4100 with catch @ 053e4134
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053e40fc with catch @ 053e4138
                        */
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 053e4164 with catch @ 053e4174
                        */
                    /* try { // try from 053e4178 to 054e4363 has its CatchHandler @ 053e4178
                       catch() { ... } // from try @ 053e4178 with catch @ 053e4178
                       catch() { ... } // from try @ 053e4390 with catch @ 053e4178
                       catch() { ... } // from try @ 053e43e0 with catch @ 053e4178
                       catch() { ... } // from try @ 053e441c with catch @ 053e4178 */
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_053e4180;
          }
                    /* try { // try from 053e4154 to 054e4157 has its CatchHandler @ 053e4160 */
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
                    /* catch() { ... } // from try @ 053e4154 with catch @ 053e4160 */
                    /* try { // try from 053e4164 to 054e416b has its CatchHandler @ 053e4174 */
      puVar5 = (undefined8 *)FUN_02b7654c(plVar13,*(long *)puVar3,2);
                    /* try { // try from 053e416c to 054e4177 has its CatchHandler @ 053e3f44 */
LAB_053e4180:
      (*(code *)*puVar5)(plVar13,uVar4,puVar5[1]);
    } while( true );
  }
  goto LAB_053e420c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_053e41c8:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_053e41fc;
    }
  }
LAB_053e41e0:
  puVar12 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06312f78,0);
LAB_053e41fc:
  (*(code *)*puVar12)(plVar6,puVar12[1]);
LAB_053e420c:
  if (-1 < param_4) {
    *(int *)(param_1 + 0x38) = param_4;
    *(byte *)(param_1 + 0x3c) = param_5 & 1;
    *(byte *)(param_1 + 0x3d) = param_6 & 1;
    *(undefined8 *)(param_1 + 0x40) = param_7;
    thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x40),param_7);
    *(undefined8 *)(param_1 + 0x58) = param_8;
    thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x58),param_8);
    *(byte *)(param_1 + 0x60) = param_9 & 1;
    return;
  }
  uVar4 = thunk_FUN_02ba3594(
                            UnityEngine_Rendering_LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2_PostfixBurstDelegate_TypeInfo
                            );
  uVar4 = FUN_0540c734(uVar4,0);
  thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
  uVar7 = thunk_FUN_02b79644();
  uVar8 = thunk_FUN_02ba3594(Unity_XR_PXR_PXR_MixedReality_<>c__DisplayClass10_0_TypeInfo);
  FUN_04cf1968(uVar7,uVar8,uVar4,0);
  uVar4 = FUN_0540c738(uVar7,0);
  uVar7 = thunk_FUN_02ba3594(Unity_XR_PXR_PXR_MixedReality_<>c__DisplayClass12_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar4,uVar7);
}


