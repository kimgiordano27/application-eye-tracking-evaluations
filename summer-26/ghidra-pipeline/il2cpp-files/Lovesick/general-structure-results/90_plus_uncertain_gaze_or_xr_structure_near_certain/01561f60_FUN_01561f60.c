/*
FUNCTION_NAME: FUN_01561f60
ENTRY_POINT: 01561f60
PROGRAM: Lovesick-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint FUN_01561f60(undefined1 param_1 [16],ulong param_2,float param_3,uint param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 *param_9,undefined4 *param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  size_t __n;
  undefined8 uVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  undefined8 *puVar17;
  undefined1 *__s;
  float *pfVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  float fVar26;
  ulong uVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 local_250 [3];
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_218;
  undefined4 local_214;
  uint local_210;
  float local_20c;
  ulong local_208;
  long local_200;
  ulong local_1f8;
  float local_1ec;
  float *local_1e8;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  uint local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  ulong local_1b0;
  float *local_1a0;
  ulong uStack_198;
  undefined8 local_190;
  float *local_180;
  ulong uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  float *local_160;
  ulong uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  float *local_f8;
  ulong uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  float local_d0;
  float local_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  long local_b8;
  
  lVar1 = tpidr_el0;
  local_b8 = *(long *)(lVar1 + 0x28);
  uVar9 = param_1._0_8_;
  uVar13 = param_1._8_8_;
  if ((DAT_03777bf8 & 1) == 0) {
    local_1c0 = param_1._0_8_;
    uStack_1b8 = param_1._8_8_;
    local_1b0 = param_2;
                    /* try { // try from 01561fd8 to 01661fdb has its CatchHandler @ 0156277c */
                    /* try { // try from 01561fdc to 01661fe7 has its CatchHandler @ 0156278c */
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_27__);
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonWriter_WriteConstructorDate__);
    thunk_FUN_00d48444(MedleyGraveyardStatue_<DissolvingCoroutine>d__36_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<Data_RoomData>_MoveNext__);
    thunk_FUN_00d48444(PTR_DAT_033eb590);
    thunk_FUN_00d48444(Meta_XR_ImmersiveDebugger_Manager_Tweak<float>_TypeInfo);
    thunk_FUN_00d48444(Oculus_Platform_Callback_RequestCallback_TypeInfo);
                    /* try { // try from 01562048 to 0166205f has its CatchHandler @ 015626fc */
    thunk_FUN_00d48444(PTR_DAT_033f5450);
    DAT_03777bf8 = 1;
    uVar9 = local_1c0;
    uVar13 = uStack_1b8;
    param_2 = local_1b0;
  }
  puVar5 = StringLiteral_302;
  puVar4 = Oculus_Platform_Callback_RequestCallback_TypeInfo;
  puVar3 = Meta_XR_ImmersiveDebugger_Manager_Tweak<float>_TypeInfo;
  puVar2 = PTR_DAT_033f5450;
                    /* try { // try from 0156207c to 0166208b has its CatchHandler @ 015626ec */
  uStack_f0 = 0;
  local_e8 = 0;
  local_f8 = (float *)0x0;
  uStack_d8 = 0;
  local_e0 = (float *)0x0;
  fStack_c8 = 0.0;
  uStack_c4 = 0;
  local_d0 = 0.0;
  local_cc = 0.0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_118 = 0;
  local_120 = 0;
  if (((float)uVar9 < DAT_028aa298) || ((float)param_2 < DAT_028aa298)) {
                    /* try { // try from 015620e4 to 016620f3 has its CatchHandler @ 015626e8 */
    local_180 = (float *)CONCAT44(local_180._4_4_,0x3d4ccccd);
    uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)System_Runtime_InteropServices_InAttribute_TypeInfo,
                               &local_180);
    uVar9 = FUN_01600b5c(*(undefined8 *)puVar4,*(undefined8 *)puVar3,uVar9,0);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar5);
    }
  }
  else {
    if (0.0 <= param_3) {
      local_1d8 = DAT_028aa298;
      local_130 = param_9[2];
      uStack_138 = param_9[1];
      local_140 = *param_9;
      local_1c0 = uVar9;
      uStack_1b8 = uVar13;
      local_1b0 = param_2;
      uVar10 = FUN_015615c8(param_7,param_8,&local_140,param_10,2,1,1);
      puVar2 = MedleyGraveyardStatue_<DissolvingCoroutine>d__36_TypeInfo;
      uVar9 = DAT_028aa450;
      if (((uVar10 & 1) != 0) && (0.5 <= (float)param_10[7])) {
        puVar17 = local_250;
        local_250[2] = 0;
        local_250[0] = NEON_fmov(0xbf800000,4);
        local_250[1] = 0;
        *(undefined4 *)((ulong)puVar17 | 0xc) = 0xbf800000;
        *(undefined8 *)((undefined4 *)((ulong)puVar17 | 0xc) + 1) = uVar9;
        uStack_234 = (undefined4)uVar9;
        uStack_230 = (undefined4)((ulong)uVar9 >> 0x20);
        uStack_238 = 0x3f800000;
        local_22c = 0x3f800000;
        local_228 = DAT_02940f88;
        uStack_178 = 0;
        local_180 = (float *)0x0;
        FUN_00bce078(&local_180,puVar17,4,*(undefined8 *)puVar2);
        uVar10 = uStack_178;
        iVar6 = (uint)uStack_178;
        local_1f8 = uStack_178 & 0xffffffff;
        local_1e8 = local_180;
        lVar19 = (long)(int)(uint)uStack_178;
        if (0 < (int)(uint)uStack_178) {
          pfVar16 = local_180 + 2;
          uVar20 = local_1f8;
          do {
            uVar20 = uVar20 - 1;
            *(ulong *)(pfVar16 + -2) =
                 CONCAT44((float)local_1b0 * 0.5 *
                          (float)((ulong)*(undefined8 *)(pfVar16 + -2) >> 0x20),
                          (float)local_1c0 * 0.5 * (float)*(undefined8 *)(pfVar16 + -2));
            *pfVar16 = param_3 * 0.5 * *pfVar16;
            pfVar16 = pfVar16 + 3;
          } while (uVar20 != 0);
        }
        local_1c8 = (float)param_10[5];
        local_1cc = (float)param_10[6];
        local_1d0 = param_4;
        local_1c4 = (float)FUN_02698e08(param_10[4],0);
        __n = lVar19 * 0xc;
        if (iVar6 == 0) {
          __s = (undefined1 *)0x0;
        }
        else {
          puVar17 = (undefined8 *)((long)puVar17 - (__n + 0xf & 0xfffffffffffffff0));
          __s = (undefined1 *)puVar17;
        }
        memset(__s,0,__n);
        uStack_178 = 0;
        local_180 = (float *)0x0;
        local_200 = lVar19;
        FUN_00bce078(&local_180,__s,uVar10 & 0xffffffff,*(undefined8 *)puVar2);
        pfVar16 = local_180;
        uVar10 = uStack_178 & 0xffffffff;
        fVar22 = (float)local_1c0;
        if ((float)local_1c0 <= (float)local_1b0) {
          fVar22 = (float)local_1b0;
        }
        local_218 = param_5;
        local_214 = param_6;
        local_210 = param_4;
        local_20c = param_3;
        local_208 = uVar10;
        if (0 < (int)(uint)uStack_178) {
          local_1d4 = fVar22 * DAT_028aa160 * fVar22 * DAT_028aa160;
          local_1dc = DAT_028aa02c;
          pfVar15 = local_1e8 + 1;
          pfVar18 = local_180;
          uVar20 = local_1f8;
          do {
            if (uVar20 == 0) goto LAB_01562d3c;
            uVar25 = (ulong)(uint)local_1c8;
            uVar27 = (ulong)(uint)local_1cc;
            fVar33 = (float)param_10[2];
            fVar29 = (float)param_10[3];
            fVar31 = (float)param_10[1];
            fVar22 = (float)FUN_02699088(local_1c4,uVar25,uVar27,local_1d0,pfVar15[-1],*pfVar15,
                                         pfVar15[1],0);
            fVar26 = (float)uVar25;
            fVar30 = (float)uVar27;
            uVar9 = FUN_026877f0(param_9,0);
            uVar11 = uVar25;
            uVar28 = uVar27;
            fVar23 = (float)FUN_026877f0(param_9,0);
            local_170 = 0;
            uStack_178 = 0;
            local_180 = (float *)0x0;
            FUN_02688ae0(uVar9,uVar25,uVar27,(fVar31 + fVar22) - fVar23,
                         (fVar33 + fVar26) - (float)uVar11,(fVar29 + fVar30) - (float)uVar28,
                         &local_180,0);
            uStack_158 = uStack_178;
            local_160 = local_180;
            local_150 = local_170;
            uVar11 = FUN_015615c8(0x42c80000,param_8,&local_160,&local_e0,2,1,1);
            if ((uVar11 & 1) == 0) goto LAB_01562c7c;
            fVar22 = local_e0._4_4_;
            fVar23 = uStack_d8._4_4_;
            fVar29 = (float)param_10[1];
            fVar30 = (float)param_10[2];
            fVar35 = (float)param_10[3];
            fVar33 = (float)param_10[4];
            fVar34 = (float)param_10[5];
            fVar31 = (float)param_10[6];
            fVar26 = (float)uStack_d8;
            if (DAT_03777c7d == '\0') {
              local_1ec = (float)uStack_d8;
              thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
              DAT_03777c7d = '\x01';
              fVar26 = local_1ec;
            }
            fVar24 = fVar31 * fVar31 + fVar33 * fVar33 + fVar34 * fVar34;
            if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar24) {
              fVar22 = (fVar23 - fVar35) * fVar31 +
                       (fVar22 - fVar29) * fVar33 + (fVar26 - fVar30) * fVar34;
              fVar23 = (fVar33 * fVar22) / fVar24;
              fVar26 = (fVar34 * fVar22) / fVar24;
              fVar24 = (fVar31 * fVar22) / fVar24;
            }
            else {
              if (DAT_03774d76 == '\0') {
                thunk_FUN_00d48444(
                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                  );
                DAT_03774d76 = '\x01';
              }
              pfVar14 = *(float **)
                         (*(long *)
                           Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                         + 0xb8);
              fVar23 = *pfVar14;
              fVar26 = pfVar14[1];
              fVar24 = pfVar14[2];
            }
            if ((local_1d4 < fVar23 * fVar23 + fVar26 * fVar26 + fVar24 * fVar24) ||
               (fStack_c8 * (float)((ulong)*(undefined8 *)(param_10 + 5) >> 0x20) +
                local_d0 * (float)param_10[4] + local_cc * (float)*(undefined8 *)(param_10 + 5) <
                local_1dc)) goto LAB_01562c7c;
            uStack_178 = uStack_d8;
            local_180 = local_e0;
            uStack_168 = CONCAT44(uStack_c4,fStack_c8);
            local_170 = CONCAT44(local_cc,local_d0);
            uVar20 = uVar20 - 1;
            uVar10 = uVar10 - 1;
            uVar9 = *(undefined8 *)((ulong)&local_180 | 4);
            pfVar15 = pfVar15 + 3;
            pfVar18[2] = *(float *)((undefined8 *)((ulong)&local_180 | 4) + 1);
            *(undefined8 *)pfVar18 = uVar9;
            pfVar18 = pfVar18 + 3;
          } while (uVar10 != 0);
        }
        uVar8 = (uint)local_208;
        if ((uVar8 < 2) || (uVar8 == 2)) {
LAB_01562d3c:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        fVar23 = pfVar16[3] - *pfVar16;
        fVar26 = pfVar16[4] - pfVar16[1];
        fVar30 = pfVar16[5] - pfVar16[2];
        fVar29 = pfVar16[6] - *pfVar16;
        fVar31 = pfVar16[7] - pfVar16[1];
        fVar22 = pfVar16[8] - pfVar16[2];
        if (DAT_0377518c == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_0377518c = '\x01';
        }
        puVar2 = System_Threading_Timer_TimerComparer_TypeInfo;
        fVar33 = fVar26 * fVar22 - fVar30 * fVar31;
        fVar30 = fVar30 * fVar29 - fVar23 * fVar22;
        fVar22 = fVar23 * fVar31 - fVar26 * fVar29;
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar23 = DAT_028aa038;
        fVar26 = SQRT(fVar22 * fVar22 + fVar33 * fVar33 + fVar30 * fVar30);
        if (fVar26 <= DAT_028aa038) {
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          pfVar15 = *(float **)
                     (*(long *)
                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                     + 0xb8);
          fVar33 = *pfVar15;
          fVar30 = pfVar15[1];
          fVar22 = pfVar15[2];
        }
        else {
          fVar33 = fVar33 / fVar26;
          fVar30 = fVar30 / fVar26;
          fVar22 = fVar22 / fVar26;
        }
        if (uVar8 < 4) goto LAB_01562d3c;
        fVar26 = pfVar16[3] - pfVar16[9];
        fVar29 = pfVar16[4] - pfVar16[10];
        fVar24 = pfVar16[5] - pfVar16[0xb];
        fVar31 = pfVar16[6] - pfVar16[9];
        fVar34 = pfVar16[7] - pfVar16[10];
        fVar35 = pfVar16[8] - pfVar16[0xb];
        local_1cc = fVar22;
        local_1c8 = fVar30;
        local_1c4 = fVar33;
        if (DAT_0377518c == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_0377518c = '\x01';
        }
        fVar22 = fVar29 * fVar35 - fVar24 * fVar34;
        fVar30 = fVar24 * fVar31 - fVar26 * fVar35;
        fVar26 = fVar26 * fVar34 - fVar29 * fVar31;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar29 = SQRT(fVar26 * fVar26 + fVar22 * fVar22 + fVar30 * fVar30);
        if (fVar29 <= fVar23) {
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          pfVar16 = *(float **)
                     (*(long *)
                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                     + 0xb8);
          fVar22 = *pfVar16;
          fVar30 = pfVar16[1];
          fVar26 = pfVar16[2];
        }
        else {
          fVar22 = fVar22 / fVar29;
          fVar30 = fVar30 / fVar29;
          fVar26 = fVar26 / fVar29;
        }
        if (DAT_0377518c == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_0377518c = '\x01';
        }
        fVar22 = -fVar22 - local_1c4;
        fVar30 = -fVar30 - local_1c8;
        fVar26 = -fVar26 - local_1cc;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar29 = local_20c;
        fVar31 = SQRT(fVar26 * fVar26 + fVar22 * fVar22 + fVar30 * fVar30);
        if (fVar31 <= fVar23) {
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          pfVar16 = *(float **)
                     (*(long *)
                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                     + 0xb8);
          fVar22 = *pfVar16;
          fVar30 = pfVar16[1];
          fVar26 = pfVar16[2];
        }
        else {
          fVar22 = fVar22 / fVar31;
          fVar30 = fVar30 / fVar31;
          fVar26 = fVar26 / fVar31;
        }
        uVar10 = (ulong)(uint)fVar30;
        uVar20 = (ulong)local_210;
        if (DAT_028aa3e0 <=
            fVar26 * (float)param_10[6] + fVar22 * (float)param_10[4] + fVar30 * (float)param_10[5])
        {
          param_10[4] = fVar22;
          param_10[5] = fVar30;
          param_10[6] = fVar26;
          uVar9 = FUN_02698e08(0);
          puVar3 = Method_Newtonsoft_Json_JsonWriter_WriteConstructorDate__;
          if (local_1d8 <= fVar29) {
            uVar32 = *(undefined8 *)(param_10 + 4);
            fVar31 = (float)param_10[6];
            uVar13 = *(undefined8 *)(param_10 + 1);
            fVar23 = (float)param_10[3];
            fVar33 = fVar29 * 0.5 + local_1d8;
            fVar22 = (float)((ulong)uVar13 >> 0x20) + (float)((ulong)uVar32 >> 0x20) * fVar33;
            fVar29 = (float)local_1c0;
            fVar30 = (float)local_1b0;
            *(float *)(puVar17 + -1) = fVar26;
            *(int *)((long)puVar17 + -4) = (int)uVar20;
            *(int *)(puVar17 + -2) = (int)uVar9;
            *(int *)((long)puVar17 + -0xc) = (int)uVar10;
            uVar8 = FUN_01562d40(CONCAT44(fVar22,(float)uVar13 + (float)uVar32 * fVar33),fVar22,
                                 fVar23 + fVar33 * fVar31,fVar29 * 0.5,fVar30 * 0.5,param_8);
            uVar8 = uVar8 ^ 1;
          }
          else {
            puVar12 = puVar17 + -6;
            puVar17[-3] = 0;
            puVar17[-4] = 0;
            puVar17[-1] = 0;
            puVar17[-2] = 0;
            puVar17[-5] = 0;
            puVar17[-6] = 0;
            *(undefined4 *)((ulong)puVar12 | 4) = 1;
            *(undefined4 *)((ulong)puVar12 | 8) = 1;
            *(undefined4 *)((ulong)puVar12 | 0xc) = 2;
            uVar13 = *(undefined8 *)puVar3;
            puVar17[-4] = 0x300000002;
            puVar17[-3] = 3;
            uStack_178 = 0;
            puVar17[-2] = 0x200000000;
            puVar17[-1] = 0x300000001;
            local_180 = (float *)0x0;
            FUN_00bce1b0(&local_180,puVar12,0xc,uVar13);
            pfVar16 = local_180;
            uVar7 = (uint)uStack_178;
            if ((int)(uint)uStack_178 < 1) {
              uVar8 = 1;
            }
            else {
              local_1b0 = CONCAT44(local_1b0._4_4_,fVar26);
              uVar21 = 0;
              do {
                if ((uVar7 <= uVar21) ||
                   (fVar22 = pfVar16[(int)uVar21], (uint)(float)local_1f8 <= (uint)fVar22))
                goto LAB_01562d3c;
                fVar30 = (float)param_10[1];
                uVar13 = *(undefined8 *)(param_10 + 2);
                pfVar15 = local_1e8 + (long)(int)fVar22 * 3;
                fVar26 = (float)local_1b0;
                uVar11 = uVar10;
                fVar23 = (float)FUN_02699088(uVar9,uVar10,local_1b0 & 0xffffffff,uVar20,*pfVar15,
                                             pfVar15[1],pfVar15[2],0);
                fVar22 = local_1d8;
                if ((uVar7 <= uVar21 + 1) ||
                   (fVar29 = pfVar16[(int)(uVar21 + 1)], (uint)(float)local_200 <= (uint)fVar29))
                goto LAB_01562d3c;
                pfVar15 = local_1e8 + (long)(int)fVar29 * 3;
                fVar29 = fVar30 + fVar23 + (float)param_10[4] * local_1d8;
                local_1c0 = CONCAT44((float)((ulong)uVar13 >> 0x20) + fVar26 +
                                     (float)((ulong)*(undefined8 *)(param_10 + 5) >> 0x20) * 0.05,
                                     (float)uVar13 + (float)uVar11 +
                                     (float)*(undefined8 *)(param_10 + 5) * 0.05);
                uStack_1b8 = 0;
                fVar26 = (float)local_1b0;
                fVar30 = (float)param_10[1];
                uVar32 = *(undefined8 *)(param_10 + 2);
                uVar11 = uVar10;
                fVar23 = (float)FUN_02699088(uVar9,uVar10,local_1b0 & 0xffffffff,uVar20,*pfVar15,
                                             pfVar15[1],pfVar15[2],0);
                uVar13 = local_1c0;
                fVar30 = (fVar30 + fVar23 + (float)param_10[4] * fVar22) - fVar29;
                fVar23 = (float)((ulong)local_1c0 >> 0x20);
                fVar22 = ((float)((ulong)uVar32 >> 0x20) + fVar26 +
                         (float)((ulong)*(undefined8 *)(param_10 + 5) >> 0x20) * 0.05) - fVar23;
                local_1c0 = CONCAT44(fVar22,((float)uVar32 + (float)uVar11 +
                                            (float)*(undefined8 *)(param_10 + 5) * 0.05) -
                                            (float)local_1c0);
                uStack_1b8 = 0;
                FUN_02688ae0(fVar29,uVar13,fVar23,fVar30,local_1c0,fVar22,&local_f8,0);
                uStack_178 = uStack_f0;
                local_180 = local_f8;
                local_170 = local_e8;
                if (DAT_03774e1b == '\0') {
                  thunk_FUN_00d48444(puVar2);
                  DAT_03774e1b = '\x01';
                }
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                fVar22 = (float)((ulong)local_1c0 >> 0x20);
                uStack_198 = uStack_178;
                local_1a0 = local_180;
                local_190 = local_170;
                uVar11 = FUN_015615c8(SQRT(fVar30 * fVar30 + (float)local_1c0 * (float)local_1c0 +
                                           fVar22 * fVar22),param_8,&local_1a0,&local_120,2,1,1);
                if ((uVar11 & 1) != 0) goto LAB_01562c7c;
                uVar21 = uVar21 + 2;
                uVar8 = 1;
              } while ((int)uVar21 < (int)uVar7);
            }
          }
          goto LAB_01562c80;
        }
      }
LAB_01562c7c:
      uVar8 = 0;
      goto LAB_01562c80;
    }
                    /* try { // try from 015620b4 to 016620cb has its CatchHandler @ 015626fc */
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = *(undefined8 *)puVar2;
  }
  FUN_02661754(uVar9,0);
  uVar8 = 0;
  *(undefined8 *)(param_10 + 1) = 0;
  *(undefined8 *)(param_10 + 5) = 0;
  *(undefined8 *)(param_10 + 3) = 0;
  *param_10 = 5;
  param_10[7] = 0;
LAB_01562c80:
  if (*(long *)(lVar1 + 0x28) == local_b8) {
    return uVar8 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


