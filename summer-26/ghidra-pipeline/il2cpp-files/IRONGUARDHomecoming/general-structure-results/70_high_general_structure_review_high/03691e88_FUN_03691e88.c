/*
FUNCTION_NAME: FUN_03691e88
ENTRY_POINT: 03691e88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


void FUN_03691e88(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  uint *puVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  ulong uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float local_f0;
  float local_ec;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  
  if ((DAT_04833ecd & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Net_FileWebRequest__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                      );
    DAT_04833ecd = 1;
  }
  puVar7 = Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__;
  local_b0 = 0;
  uStack_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  plVar17 = *(long **)(param_4 + 0x28);
  if (plVar17 == (long *)0x0) goto LAB_0369288c;
  lVar11 = *plVar17;
  uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar14 != 0) {
    piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) ==
          *(long *)
           Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__) {
        puVar10 = (undefined8 *)(lVar11 + (long)(*piVar16 + 0x12) * 0x10 + 0x138);
        goto LAB_03691f58;
      }
      uVar14 = uVar14 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar14 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar17,*(long *)
                                  Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__
                         ,0x12);
LAB_03691f58:
  uVar14 = (*(code *)*puVar10)(plVar17,&local_b0,puVar10[1]);
  if ((uVar14 & 1) == 0) {
LAB_036927ac:
    FUN_0369191c(param_4,0);
    *(undefined4 *)(param_4 + 0x74) = 0xffffffff;
    *(undefined1 *)(param_4 + 0xb0) = 0;
  }
  else {
    plVar17 = *(long **)(param_4 + 0x28);
    if (plVar17 == (long *)0x0) {
LAB_0369288c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar12 = *plVar17;
    lVar11 = *(long *)puVar7;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar11) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_03691fc0;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar17,lVar11,0);
LAB_03691fc0:
    iVar9 = (*(code *)*puVar10)(plVar17,puVar10[1]);
    if (DAT_0482ee19 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee19 = '\x01';
    }
    puVar4 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
    if (*(long *)(param_4 + 0x30) == 0) goto LAB_0369288c;
    fVar35 = local_b0._4_4_;
    fVar34 = (float)uStack_a8;
    fVar40 = (float)local_b0;
    lVar11 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                      0xb8);
    fVar20 = *(float *)(lVar11 + 0x18);
    fVar42 = *(float *)(lVar11 + 0x1c);
    fVar39 = *(float *)(lVar11 + 0x20);
    fVar21 = (float)FUN_0407d3c8(*(long *)(param_4 + 0x30),0);
    if (DAT_0482ee9b == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee9b = '\x01';
    }
    puVar5 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
    fVar40 = fVar40 - fVar21;
    fVar35 = fVar35 - param_2;
    fVar34 = fVar34 - param_3;
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar21 = DAT_00c926ac;
    fVar22 = SQRT(fVar34 * fVar34 + fVar40 * fVar40 + fVar35 * fVar35);
    if (fVar22 <= DAT_00c926ac) {
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      pfVar13 = *(float **)(*(long *)puVar4 + 0xb8);
      fVar40 = *pfVar13;
      fVar35 = pfVar13[1];
      fVar34 = pfVar13[2];
    }
    else {
      fVar40 = fVar40 / fVar22;
      fVar35 = fVar35 / fVar22;
      fVar34 = fVar34 / fVar22;
    }
    uVar14 = (ulong)(uint)fVar34;
                    /* catch() { ... } // from try @ 03692144 with catch @ 036920e8
                       catch() { ... } // from try @ 0369217c with catch @ 036920e8
                       catch() { ... } // from try @ 036921b0 with catch @ 036920e8
                       catch() { ... } // from try @ 03692230 with catch @ 036920e8 */
                    /* try { // try from 0369210c to 03792113 has its CatchHandler @ 03692144 */
    if (DAT_0482ee9b == '\0') {
                    /* try { // try from 03692114 to 03792133 has its CatchHandler @ 0369214c */
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee9b = '\x01';
    }
    fVar37 = fVar42 * fVar34 - fVar39 * fVar35;
    fVar22 = fVar39 * fVar40 - fVar20 * fVar34;
    fVar36 = fVar20 * fVar35 - fVar42 * fVar40;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    /* try { // try from 03692140 to 03792143 has its CatchHandler @ 03692148 */
      thunk_FUN_01ee6d7c();
    }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0369210c with catch @ 03692144
                       try { // try from 03692144 to 03792163 has its CatchHandler @ 036920e8 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03692140 with catch @ 03692148
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03692114 with catch @ 0369214c
                        */
    fVar30 = SQRT(fVar36 * fVar36 + fVar37 * fVar37 + fVar22 * fVar22);
                    /* try { // try from 03692164 to 0379217b has its CatchHandler @ 03692228 */
    if (fVar30 <= fVar21) {
                    /* try { // try from 0369217c to 03792197 has its CatchHandler @ 036920e8 */
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
                    /* try { // try from 03692198 to 037921af has its CatchHandler @ 03692228 */
      pfVar13 = *(float **)(*(long *)puVar4 + 0xb8);
      fVar37 = *pfVar13;
      fVar22 = pfVar13[1];
      fVar36 = pfVar13[2];
    }
    else {
      fVar37 = fVar37 / fVar30;
      fVar22 = fVar22 / fVar30;
      fVar36 = fVar36 / fVar30;
    }
    puVar6 = Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__;
                    /* try { // try from 036921b0 to 03792217 has its CatchHandler @ 036920e8 */
    if (iVar9 != 1) {
      fVar22 = -fVar22;
      fVar36 = -fVar36;
    }
    if (iVar9 != 1) {
      fVar37 = -fVar37;
    }
    fVar30 = fVar22;
    fVar31 = fVar36;
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar23 = (float)FUN_0407bb40(&local_b0,0);
    fVar41 = fVar30;
    fVar38 = fVar31;
    if (iVar9 == 1) {
      fVar23 = -fVar23;
      fVar41 = -fVar30;
      fVar38 = -fVar31;
    }
                    /* try { // try from 03692218 to 03792227 has its CatchHandler @ 03692228 */
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
                    /* catch() { ... } // from try @ 03692164 with catch @ 03692228
                       catch() { ... } // from try @ 03692198 with catch @ 03692228
                       catch() { ... } // from try @ 03692218 with catch @ 03692228 */
                    /* try { // try from 0369222c to 0379222f has its CatchHandler @ 03692238 */
    fVar24 = (float)FUN_0407bbb0(&local_b0,0);
                    /* try { // try from 03692230 to 0379223b has its CatchHandler @ 036920e8 */
    if (iVar9 == 1) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0369222c with catch @ 03692238
                        */
      fVar24 = -fVar24;
      fVar30 = -fVar30;
      fVar31 = -fVar31;
    }
    if (DAT_0482f8ab == '\0') {
      thunk_FUN_01efb3a4(
                        Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                        );
      DAT_0482f8ab = '\x01';
    }
    puVar6 = Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__;
    fVar25 = fVar39 * fVar39 + fVar20 * fVar20 + fVar42 * fVar42;
    local_ec = fVar40;
    local_f0 = fVar35;
    fVar28 = fVar34;
    if (**(float **)
          (*(long *)
            Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__ +
          0xb8) <= fVar25) {
      fVar28 = fVar39 * fVar34 + fVar20 * fVar40 + fVar42 * fVar35;
      local_ec = fVar40 - (fVar20 * fVar28) / fVar25;
      local_f0 = fVar35 - (fVar42 * fVar28) / fVar25;
      fVar28 = fVar34 - (fVar39 * fVar28) / fVar25;
    }
    if (DAT_0482ee9b == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee9b = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar20 = SQRT(fVar28 * fVar28 + local_ec * local_ec + local_f0 * local_f0);
    if (fVar20 <= fVar21) {
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      pfVar13 = *(float **)(*(long *)puVar4 + 0xb8);
      local_ec = *pfVar13;
      local_f0 = pfVar13[1];
      fVar28 = pfVar13[2];
    }
    else {
      local_ec = local_ec / fVar20;
      local_f0 = local_f0 / fVar20;
      fVar28 = fVar28 / fVar20;
    }
    uVar29 = (ulong)(uint)fVar35;
    if (DAT_0482f8ab == '\0') {
      thunk_FUN_01efb3a4(
                        Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                        );
      DAT_0482f8ab = '\x01';
    }
    fVar20 = fVar34 * fVar34 + fVar40 * fVar40 + fVar35 * fVar35;
    if (**(float **)(*(long *)puVar6 + 0xb8) <= fVar20) {
      fVar39 = fVar34 * fVar38 + fVar40 * fVar23 + fVar35 * fVar41;
      fVar23 = fVar23 - (fVar40 * fVar39) / fVar20;
      fVar41 = fVar41 - (fVar35 * fVar39) / fVar20;
      fVar38 = fVar38 - (fVar34 * fVar39) / fVar20;
    }
    if (DAT_0482ee9b == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee9b = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar35 = SQRT(fVar38 * fVar38 + fVar23 * fVar23 + fVar41 * fVar41);
    if (fVar35 <= fVar21) {
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      pfVar13 = *(float **)(*(long *)puVar4 + 0xb8);
      fVar23 = *pfVar13;
      fVar41 = pfVar13[1];
      fVar38 = pfVar13[2];
    }
    else {
      fVar23 = fVar23 / fVar35;
      fVar41 = fVar41 / fVar35;
      fVar38 = fVar38 / fVar35;
    }
    uVar33 = (ulong)(uint)fVar37;
    fVar35 = (float)FUN_01fdd7a4(fVar23,fVar41,fVar38,uVar33,fVar22,fVar36,0);
    plVar17 = *(long **)(param_4 + 0x28);
    if (plVar17 == (long *)0x0) goto LAB_0369288c;
    lVar12 = *plVar17;
    lVar11 = *(long *)puVar7;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar11) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_03692508;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar17,lVar11,0);
LAB_03692508:
    iVar9 = (*(code *)*puVar10)(plVar17,puVar10[1]);
    fVar34 = -fVar35;
    if (iVar9 != 1) {
      fVar34 = fVar35;
    }
    uVar32 = 0xc28c0000;
    uVar15 = (ulong)(uint)(fVar34 + 360.0);
    fVar35 = fVar34 + 360.0;
    if (-70.0 <= fVar34) {
      fVar35 = fVar34;
    }
    *(float *)(param_4 + 0x7c) = fVar35;
    if (*(long *)(param_4 + 0x30) == 0) goto LAB_0369288c;
    uVar26 = FUN_0407d3c8(*(long *)(param_4 + 0x30),0);
    uVar27 = FUN_0406761c(fVar40,uVar29,uVar14,0);
    local_d0 = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    local_b8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
    FUN_0407b788(uVar26,uVar15,uVar32,uVar27,uVar29,uVar14,uVar33,&local_d0,0);
    plVar17 = *(long **)(param_4 + 0x48);
    *(float *)(param_4 + 0x80) = fVar23;
    *(float *)(param_4 + 0x84) = fVar41;
    *(float *)(param_4 + 0x88) = fVar38;
    *(ulong *)(param_4 + 0xa0) = CONCAT44(local_b8,uStack_bc);
    *(ulong *)(param_4 + 0x98) = CONCAT44(local_c0,uStack_c4);
    *(ulong *)(param_4 + 0x94) = CONCAT44(uStack_c4,uStack_c8);
    *(undefined8 *)(param_4 + 0x8c) = local_d0;
    puVar7 = Method_System_Net_FileWebRequest__ctor__;
    if (plVar17 == (long *)0x0) goto LAB_0369288c;
    lVar11 = *plVar17;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)Method_System_Net_FileWebRequest__ctor__) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_03692630;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar17,*(long *)Method_System_Net_FileWebRequest__ctor__,0);
LAB_03692630:
    uVar14 = (*(code *)*puVar10)(plVar17,puVar10[1]);
    if ((uVar14 & 1) == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(byte *)(param_4 + 0x71) ^ 1;
    }
    plVar17 = *(long **)(param_4 + 0x48);
    if (plVar17 == (long *)0x0) goto LAB_0369288c;
    lVar12 = *plVar17;
    lVar11 = *(long *)puVar7;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar11) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_036926d8;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar17,lVar11,0);
LAB_036926d8:
    bVar8 = (*(code *)*puVar10)(plVar17,puVar10[1]);
    puVar18 = (uint *)(param_4 + 0x74);
    *(byte *)(param_4 + 0x71) = bVar8 & 1;
    if ((uVar19 & 0.5 < (fVar31 * fVar28 + fVar24 * local_ec + fVar30 * local_f0) * 0.5 + 0.5 &
        *puVar18 >> 0x1f) == 0) {
      if ((int)*puVar18 < 0) {
        return;
      }
      plVar17 = *(long **)(param_4 + 0x58);
      if (plVar17 == (long *)0x0) goto LAB_0369288c;
      lVar12 = *plVar17;
      lVar11 = *(long *)puVar7;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0369279c;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar17,lVar11,0);
LAB_0369279c:
      uVar14 = (*(code *)*puVar10)(plVar17,puVar10[1]);
      if ((uVar14 & 1) != 0) goto LAB_036927ac;
      uVar19 = *puVar18;
      if ((int)uVar19 < 0) {
        return;
      }
      if (*(char *)(param_4 + 0xb0) != '\0') {
        return;
      }
      lVar11 = *(long *)(param_4 + 0x38);
      if (lVar11 == 0) goto LAB_0369288c;
      uVar2 = *(uint *)(lVar11 + 0x18);
      if (uVar2 <= uVar19) goto LAB_03692890;
      lVar12 = *(long *)(lVar11 + (ulong)uVar19 * 8 + 0x20);
      if (lVar12 == 0) goto LAB_0369288c;
      if (*(float *)(lVar12 + 0x10) <= *(float *)(param_4 + 0x7c)) {
        if (*(float *)(param_4 + 0x7c) <= *(float *)(lVar12 + 0x14)) {
          return;
        }
        uVar3 = uVar2 - 1;
        if ((int)(uVar19 + 1) <= (int)uVar3) {
          uVar3 = uVar19 + 1;
        }
        *puVar18 = uVar3;
        if (uVar2 <= uVar3) goto LAB_03692890;
        uVar14 = (ulong)(int)uVar3;
      }
      else {
        if ((int)uVar19 < 2) {
          uVar19 = 1;
        }
        uVar19 = uVar19 - 1;
        *puVar18 = uVar19;
        if (uVar2 <= uVar19) {
LAB_03692890:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        uVar14 = (ulong)uVar19;
      }
      lVar11 = *(long *)(lVar11 + uVar14 * 8 + 0x20);
      if (lVar11 == 0) goto LAB_0369288c;
      uVar1 = *(undefined4 *)(lVar11 + 0x1c);
    }
    else {
      lVar11 = FUN_03692894(*(undefined4 *)(param_4 + 0x7c),param_4,puVar18);
      if (lVar11 == 0) goto LAB_0369288c;
      if (*(char *)(lVar11 + 0x18) == '\0') {
        *puVar18 = 0xffffffff;
        return;
      }
      uVar1 = *(undefined4 *)(lVar11 + 0x1c);
    }
    FUN_0369191c(param_4,uVar1);
  }
  return;
}


