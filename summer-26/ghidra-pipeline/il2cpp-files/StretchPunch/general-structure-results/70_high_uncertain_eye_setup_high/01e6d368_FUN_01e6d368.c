/*
FUNCTION_NAME: FUN_01e6d368
ENTRY_POINT: 01e6d368
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_15;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_12
*/


undefined8 * FUN_01e6d368(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  undefined **ppuVar13;
  uint uVar14;
  char *pcVar15;
  undefined1 uVar16;
  undefined8 *puVar17;
  long *plVar18;
  void *pvVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long local_60;
  long local_58;
  
                    /* catch() { ... } // from try @ 01e6d194 with catch @ 01e6d370
                       try { // try from 01e6d370 to 01f6d47b has its CatchHandler @ 01e6c728 */
                    /* catch() { ... } // from try @ 01e6ca9c with catch @ 01e6d374 */
                    /* catch() { ... } // from try @ 01e6ceb8 with catch @ 01e6d378 */
                    /* catch() { ... } // from try @ 01e6c7c0 with catch @ 01e6d37c */
                    /* catch() { ... } // from try @ 01e6d260 with catch @ 01e6d380 */
                    /* catch() { ... } // from try @ 01e6d228 with catch @ 01e6d388 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 01e6ce8c with catch @ 01e6d390 */
  pcVar15 = (char *)*param_1;
  pcVar12 = (char *)param_1[1];
                    /* catch() { ... } // from try @ 01e6c794 with catch @ 01e6d398 */
  uVar8 = (long)pcVar12 - (long)pcVar15;
                    /* catch() { ... } // from try @ 01e6cde0 with catch @ 01e6d3a0 */
  if (uVar8 < 2) goto LAB_01e6d3a4;
                    /* catch() { ... } // from try @ 01e6cf2c with catch @ 01e6d3c4
                       catch() { ... } // from try @ 01e6cfdc with catch @ 01e6d3c4 */
  cVar2 = *pcVar15;
                    /* catch() { ... } // from try @ 01e6c834 with catch @ 01e6d3c8
                       catch() { ... } // from try @ 01e6c8e4 with catch @ 01e6d3c8 */
                    /* catch() { ... } // from try @ 01e6cc88 with catch @ 01e6d3cc */
                    /* catch() { ... } // from try @ 01e6d1e4 with catch @ 01e6d3d0 */
  if (cVar2 == 'g') {
                    /* catch() { ... } // from try @ 01e6caec with catch @ 01e6d3d4 */
                    /* catch() { ... } // from try @ 01e6cc0c with catch @ 01e6d3d8
                       catch() { ... } // from try @ 01e6cc54 with catch @ 01e6d3d8 */
                    /* catch() { ... } // from try @ 01e6cb5c with catch @ 01e6d3dc
                       catch() { ... } // from try @ 01e6d2f8 with catch @ 01e6d3dc
                       catch() { ... } // from try @ 01e6d31c with catch @ 01e6d3dc
                       catch() { ... } // from try @ 01e6d33c with catch @ 01e6d3dc */
    if (pcVar15[1] == 's') {
                    /* catch() { ... } // from try @ 01e6ce30 with catch @ 01e6d3e0 */
      pcVar15 = pcVar15 + 2;
                    /* catch() { ... } // from try @ 01e6d0a8 with catch @ 01e6d3e4
                       catch() { ... } // from try @ 01e6d160 with catch @ 01e6d3e4 */
      uVar8 = (long)pcVar12 - (long)pcVar15;
      *param_1 = (long)pcVar15;
      if (uVar8 < 2) goto LAB_01e6d3a4;
      uVar16 = 1;
    }
    else {
      uVar16 = 0;
    }
    cVar2 = *pcVar15;
  }
  else {
    uVar16 = 0;
  }
                    /* catch() { ... } // from try @ 01e6c9b0 with catch @ 01e6d418
                       catch() { ... } // from try @ 01e6ca68 with catch @ 01e6d418 */
  switch(cVar2) {
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
code_r0x01e6d434:
    puVar9 = (undefined8 *)FUN_01e70798(param_1);
    goto LAB_01e6ece0;
  default:
    puVar9 = (undefined8 *)0x0;
    if ((10 < uVar8) && (cVar2 == 'u')) {
      if (((pcVar15[1] == '8') &&
          ((((pcVar15[2] == '_' && (pcVar15[3] == '_')) && (pcVar15[4] == 'u')) &&
           ((pcVar15[5] == 'u' && (pcVar15[6] == 'i')))))) &&
         ((pcVar15[7] == 'd' &&
          (((pcVar15[8] == 'o' && (pcVar15[9] == 'f')) && (pcVar15[10] == 't')))))) {
        *param_1 = (long)(pcVar15 + 0xb);
        lVar5 = FUN_01e6912c(param_1);
      }
      else {
        if (((((pcVar15[1] != '8') || (pcVar15[2] != '_')) || (pcVar15[3] != '_')) ||
            ((pcVar15[4] != 'u' || (pcVar15[5] != 'u')))) ||
           ((((pcVar15[6] != 'i' || ((pcVar15[7] != 'd' || (pcVar15[8] != 'o')))) ||
             (pcVar15[9] != 'f')) || (pcVar15[10] != 'z')))) goto LAB_01e6d3a4;
        *param_1 = (long)(pcVar15 + 0xb);
        lVar5 = FUN_01e6d368(param_1);
      }
      if (lVar5 == 0) goto LAB_01e6d3a4;
      puVar17 = (undefined8 *)param_1[0x266];
      lVar10 = puVar17[1];
      puVar9 = puVar17;
      if (0xfef < lVar10 + 0x20U) {
        puVar9 = malloc(0x1000);
        if (puVar9 == (void *)0x0) goto LAB_01e6f328;
        lVar10 = 0;
        *puVar9 = puVar17;
        puVar9[1] = 0;
        param_1[0x266] = (long)puVar9;
      }
      uVar14 = 0x140;
      lVar4 = lVar10 + 0x20;
      lVar10 = (long)puVar9 + lVar10;
      ppuVar13 = &
                 Method_UnityEngine_Rendering_ProbeReferenceVolume_<>c__DisplayClass171_0_<RegisterDebug>g__RefreshDebug_0<bool>__
      ;
LAB_01e6e848:
      puVar9[1] = lVar4;
      puVar9 = (undefined8 *)(lVar10 + 0x10);
      *puVar9 = ppuVar13;
      *(uint *)(lVar10 + 0x18) = uVar14 | 0x1010000;
      *(long *)(lVar10 + 0x20) = lVar5;
    }
    break;
  case 'L':
    puVar9 = (undefined8 *)FUN_01e6f338(param_1);
    goto LAB_01e6ece0;
  case 'T':
    puVar9 = (undefined8 *)FUN_01e6c3e8(param_1);
    goto LAB_01e6ece0;
  case 'a':
    puVar9 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'N':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00bc5f61;
      break;
    default:
      goto LAB_01e6d3ac;
    case 'S':
      puVar6 = &DAT_00bd0077;
      goto LAB_01e6ecd0;
    case 'a':
      puVar6 = &DAT_00bdd5a0;
      *param_1 = (long)(pcVar15 + 2);
      break;
    case 'd':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6d368(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar9 = malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_01e6f328;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        lVar4 = lVar10 + 0x30;
        lVar10 = (long)puVar9 + lVar10;
        puVar6 = &DAT_00bdece4;
        goto LAB_01e6eb00;
      }
      goto LAB_01e6d3a4;
    case 'n':
      puVar6 = &DAT_00bdece4;
LAB_01e6ecd0:
      *param_1 = (long)(pcVar15 + 2);
      puVar7 = puVar6 + 1;
      goto LAB_01e6ecd8;
    case 't':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6912c(param_1);
      goto joined_r0x01e6e668;
    case 'z':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6d368(param_1);
joined_r0x01e6e668:
      if (lVar5 == 0) goto LAB_01e6d3a4;
      pvVar19 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar19 + 8);
      puVar17 = pvVar19;
      if (0xfef < lVar10 + 0x40U) {
        puVar17 = malloc(0x1000);
        if (puVar17 == (void *)0x0) {
LAB_01e6f328:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar10 = 0;
        *puVar17 = pvVar19;
        puVar17[1] = 0;
        param_1[0x266] = (long)puVar17;
      }
      *(long *)((long)puVar17 + 8) = lVar10 + 0x40;
      pcVar15 = "alignof (";
      puVar9 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
      *puVar9 = &
                Method_ToonPeople_Playanimation_<playanim>d__28_System_Collections_IEnumerator_Reset__
      ;
      *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010134;
      pcVar12 = "";
LAB_01e6e900:
      puVar9[2] = pcVar15;
      puVar9[3] = pcVar12;
      puVar9[4] = lVar5;
LAB_01e6e90c:
      puVar9[5] = &DAT_00be1c35;
      puVar9[6] = &DAT_00be1c36;
      goto LAB_01e6d3ac;
    }
    goto LAB_01e6e5ac;
  case 'c':
    puVar9 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'c':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6912c(param_1);
      if ((lVar5 == 0) || (lVar10 = FUN_01e6d368(param_1), lVar10 == 0)) goto LAB_01e6d3a4;
      pvVar19 = (void *)param_1[0x266];
      lVar4 = *(long *)((long)pvVar19 + 8);
      puVar9 = pvVar19;
      if (0xfef < lVar4 + 0x30U) {
        puVar9 = malloc(0x1000);
        if (puVar9 == (void *)0x0) goto LAB_01e6f328;
        lVar4 = 0;
        *puVar9 = pvVar19;
        puVar9[1] = 0;
        param_1[0x266] = (long)puVar9;
      }
      pcVar15 = "const_cast";
      *(long *)((long)puVar9 + 8) = lVar4 + 0x30;
      puVar9 = (undefined8 *)((long)puVar9 + lVar4 + 0x10);
      *puVar9 = &Method_OVRPlugin_<>c_<_cctor>b__786_30__;
      pcVar12 = "";
LAB_01e6ea84:
      *(undefined4 *)(puVar9 + 1) = 0x1010135;
      puVar9[2] = pcVar15;
      puVar9[3] = pcVar12;
      puVar9[4] = lVar5;
      puVar9[5] = lVar10;
      break;
    case 'l':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6d368(param_1);
      if (lVar5 != 0) {
        lVar10 = param_1[2];
        lVar4 = param_1[3];
        while( true ) {
          pcVar15 = (char *)*param_1;
          if ((pcVar15 != (char *)param_1[1]) && (*pcVar15 == 'E')) {
            lVar10 = (lVar4 - lVar10 >> 3) * 8;
            *param_1 = (long)(pcVar15 + 1);
            auVar21 = FUN_01e74ad4(param_1,param_1[2] + lVar10,param_1[3]);
            puVar17 = (undefined8 *)param_1[0x266];
            param_1[3] = param_1[2] + lVar10;
            lVar10 = puVar17[1];
            puVar9 = puVar17;
            if (0xfef < lVar10 + 0x30U) {
              puVar9 = malloc(0x1000);
              if (puVar9 == (undefined8 *)0x0) goto LAB_01e6f328;
              lVar10 = 0;
              *puVar9 = puVar17;
              puVar9[1] = 0;
              param_1[0x266] = (long)puVar9;
            }
            uVar14 = 0x137;
            lVar4 = lVar10 + 0x30;
            lVar10 = (long)puVar9 + lVar10;
            ppuVar13 = &Method_OVRPlugin_<>c_<_cctor>b__786_43__;
            goto LAB_01e6f26c;
          }
          local_60 = FUN_01e6d368(param_1);
          if (local_60 == 0) break;
          FUN_01e6b668(param_1 + 2,&local_60);
        }
      }
      goto LAB_01e6d3a4;
    case 'm':
      puVar6 = &DAT_00bc43b0;
      goto LAB_01e6ecd0;
    case 'o':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6d368(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar9 = malloc(0x1000);
          if (puVar9 == (void *)0x0) goto LAB_01e6f328;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        lVar4 = lVar10 + 0x30;
        lVar10 = (long)puVar9 + lVar10;
        puVar6 = &DAT_00bdece6;
        goto LAB_01e6eb00;
      }
      goto LAB_01e6d3a4;
    case 'v':
      lVar10 = param_1[0x61];
      *param_1 = (long)(pcVar15 + 2);
      *(undefined1 *)(param_1 + 0x61) = 0;
      lVar5 = FUN_01e6912c(param_1);
      *(char *)(param_1 + 0x61) = (char)lVar10;
      if (lVar5 == 0) goto LAB_01e6d3a4;
      pcVar15 = (char *)*param_1;
      if ((pcVar15 == (char *)param_1[1]) || (*pcVar15 != '_')) {
        local_60 = FUN_01e6d368(param_1);
        if (local_60 == 0) goto LAB_01e6d3a4;
        pvVar19 = (void *)param_1[0x266];
        lVar10 = *(long *)((long)pvVar19 + 8);
        puVar9 = pvVar19;
        if (0xfef < lVar10 + 0x10U) {
          puVar9 = malloc(0x1000);
          if (puVar9 == (void *)0x0) goto LAB_01e6f328;
          lVar10 = 0;
          *puVar9 = pvVar19;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        *(long *)((long)puVar9 + 8) = lVar10 + 0x10;
        plVar18 = (long *)((long)puVar9 + lVar10 + 0x10);
        *plVar18 = local_60;
        pvVar19 = (void *)param_1[0x266];
        lVar10 = *(long *)((long)pvVar19 + 8);
        puVar17 = pvVar19;
        if (0xfef < lVar10 + 0x30U) {
          puVar17 = malloc(0x1000);
          if (puVar17 == (void *)0x0) goto LAB_01e6f328;
          lVar10 = 0;
          *puVar17 = pvVar19;
          puVar17[1] = 0;
          param_1[0x266] = (long)puVar17;
        }
        *(long *)((long)puVar17 + 8) = lVar10 + 0x30;
        puVar9 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
        *puVar9 = &Method_OVRPlugin_<>c_<_cctor>b__786_56__;
        *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x101013c;
        *(long *)((long)puVar17 + lVar10 + 0x20) = lVar5;
        *(long **)((long)puVar17 + lVar10 + 0x28) = plVar18;
        *(undefined8 *)((long)puVar17 + lVar10 + 0x30) = 1;
      }
      else {
        pcVar15 = pcVar15 + 1;
        *param_1 = (long)pcVar15;
        lVar10 = param_1[2];
        lVar4 = param_1[3];
        if (pcVar15 == (char *)param_1[1]) goto LAB_01e6dff8;
        while (*pcVar15 != 'E') {
LAB_01e6dff8:
          do {
            local_60 = FUN_01e6d368(param_1);
            if (local_60 == 0) goto LAB_01e6d3a4;
            FUN_01e6b668(param_1 + 2,&local_60);
            pcVar15 = (char *)*param_1;
          } while (pcVar15 == (char *)param_1[1]);
        }
        lVar10 = (lVar4 - lVar10 >> 3) * 8;
        *param_1 = (long)(pcVar15 + 1);
        auVar21 = FUN_01e74ad4(param_1,param_1[2] + lVar10,param_1[3]);
        puVar17 = (undefined8 *)param_1[0x266];
        param_1[3] = param_1[2] + lVar10;
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar9 = malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_01e6f328;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        uVar14 = 0x13c;
        lVar4 = lVar10 + 0x30;
        lVar10 = (long)puVar9 + lVar10;
        ppuVar13 = &Method_OVRPlugin_<>c_<_cctor>b__786_56__;
LAB_01e6f26c:
        puVar9[1] = lVar4;
        puVar9 = (undefined8 *)(lVar10 + 0x10);
        *puVar9 = ppuVar13;
        *(uint *)(lVar10 + 0x18) = uVar14 | 0x1010000;
        *(long *)(lVar10 + 0x20) = lVar5;
        *(undefined1 (*) [16])(lVar10 + 0x28) = auVar21;
      }
    }
    break;
  case 'd':
    puVar9 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'V':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00bbe392;
      goto LAB_01e6e5ac;
    case 'a':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6d368(param_1);
      if (lVar5 == 0) goto LAB_01e6d3a4;
      pvVar19 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar19 + 8);
      puVar17 = pvVar19;
      if (0xfef < lVar10 + 0x20U) {
        puVar17 = malloc(0x1000);
        if (puVar17 == (void *)0x0) goto LAB_01e6f328;
        lVar10 = 0;
        *puVar17 = pvVar19;
        puVar17[1] = 0;
        param_1[0x266] = (long)puVar17;
      }
      *(long *)((long)puVar17 + 8) = lVar10 + 0x20;
      puVar9 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
      *puVar9 = &Method_OVRPlugin_<>c_<_cctor>b__786_69__;
      *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010139;
      *(long *)((long)puVar17 + lVar10 + 0x20) = lVar5;
      *(undefined1 *)((long)puVar17 + lVar10 + 0x28) = uVar16;
      *(undefined1 *)((long)puVar17 + lVar10 + 0x29) = 1;
      break;
    case 'c':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6912c(param_1);
      if ((lVar5 != 0) && (lVar10 = FUN_01e6d368(param_1), lVar10 != 0)) {
        pvVar19 = (void *)param_1[0x266];
        lVar4 = *(long *)((long)pvVar19 + 8);
        puVar9 = pvVar19;
        if (0xfef < lVar4 + 0x30U) {
          puVar9 = malloc(0x1000);
          if (puVar9 == (void *)0x0) goto LAB_01e6f328;
          lVar4 = 0;
          *puVar9 = pvVar19;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        pcVar15 = "dynamic_cast";
        *(long *)((long)puVar9 + 8) = lVar4 + 0x30;
        puVar9 = (undefined8 *)((long)puVar9 + lVar4 + 0x10);
        *puVar9 = &Method_OVRPlugin_<>c_<_cctor>b__786_30__;
        pcVar12 = "";
        goto LAB_01e6ea84;
      }
      goto LAB_01e6d3a4;
    case 'e':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6d368(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar9 = malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_01e6f328;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        lVar4 = lVar10 + 0x30;
        lVar10 = (long)puVar9 + lVar10;
        puVar6 = &DAT_00bc26de;
        goto LAB_01e6eb00;
      }
      goto LAB_01e6d3a4;
    case 'l':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6d368(param_1);
      if (lVar5 == 0) goto LAB_01e6d3a4;
      pvVar19 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar19 + 8);
      puVar17 = pvVar19;
      if (0xfef < lVar10 + 0x20U) {
        puVar17 = malloc(0x1000);
        if (puVar17 == (void *)0x0) goto LAB_01e6f328;
        lVar10 = 0;
        *puVar17 = pvVar19;
        puVar17[1] = 0;
        param_1[0x266] = (long)puVar17;
      }
      *(long *)((long)puVar17 + 8) = lVar10 + 0x20;
      puVar9 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
      *puVar9 = &Method_OVRPlugin_<>c_<_cctor>b__786_69__;
      *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010139;
      *(long *)((long)puVar17 + lVar10 + 0x20) = lVar5;
      *(undefined1 *)((long)puVar17 + lVar10 + 0x28) = uVar16;
      *(undefined1 *)((long)puVar17 + lVar10 + 0x29) = 0;
      break;
    case 'n':
      goto code_r0x01e6d434;
    case 's':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6d368(param_1);
      if ((lVar5 == 0) || (lVar10 = FUN_01e6d368(param_1), lVar10 == 0)) goto LAB_01e6d3a4;
      puVar17 = (undefined8 *)param_1[0x266];
      lVar4 = puVar17[1];
      puVar9 = puVar17;
      if (0xfef < lVar4 + 0x30U) {
        puVar9 = malloc(0x1000);
        if (puVar9 == (undefined8 *)0x0) goto LAB_01e6f328;
        lVar4 = 0;
        *puVar9 = puVar17;
        puVar9[1] = 0;
        param_1[0x266] = (long)puVar9;
      }
      lVar11 = (long)puVar9 + lVar4;
      puVar6 = &UNK_00bcca30;
LAB_01e6ec18:
      puVar9[1] = lVar4 + 0x30;
      puVar9 = (undefined8 *)(lVar11 + 0x10);
      *puVar9 = &Method_UnityEngine_ObjectDispatcher_<>c_<_cctor>b__54_1__;
      puVar7 = puVar6 + 2;
LAB_01e6ecb0:
      *(undefined4 *)(puVar9 + 1) = 0x1010133;
      puVar9[2] = lVar5;
      puVar9[3] = puVar6;
      puVar9[4] = puVar7;
      puVar9[5] = lVar10;
      break;
    case 't':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6d368(param_1);
      if ((lVar5 != 0) && (lVar10 = FUN_01e6d368(param_1), lVar10 != 0)) {
        pvVar19 = (void *)param_1[0x266];
        lVar4 = *(long *)((long)pvVar19 + 8);
        puVar9 = pvVar19;
        if (0xfef < lVar4 + 0x30U) {
          puVar9 = malloc(0x1000);
          if (puVar9 == (void *)0x0) goto LAB_01e6f328;
          lVar4 = 0;
          *puVar9 = pvVar19;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        puVar6 = &DAT_00bb76cd;
        *(long *)((long)puVar9 + 8) = lVar4 + 0x30;
        puVar9 = (undefined8 *)((long)puVar9 + lVar4 + 0x10);
        *puVar9 = &Method_UnityEngine_ObjectDispatcher_<>c_<_cctor>b__54_1__;
        puVar7 = &DAT_00bb76ce;
        goto LAB_01e6ecb0;
      }
      goto LAB_01e6d3a4;
    case 'v':
      puVar6 = &DAT_00bb77c1;
      goto LAB_01e6ecd0;
    }
    break;
  case 'e':
    cVar2 = pcVar15[1];
    if (cVar2 == 'O') {
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00bcafa9;
    }
    else {
      if (cVar2 != 'q') {
        if (cVar2 == 'o') {
          puVar6 = &DAT_00bd17f2;
          goto LAB_01e6ecd0;
        }
        goto LAB_01e6d3a4;
      }
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00bcafac;
    }
    goto LAB_01e6e5ac;
  case 'f':
    if ((pcVar15[1] == 'p') ||
       (((2 < uVar8 && (pcVar15[1] == 'L')) && ((byte)pcVar15[2] - 0x30 < 10)))) {
      puVar9 = (undefined8 *)FUN_01e6fe18(param_1);
    }
    else {
      puVar9 = (undefined8 *)FUN_01e700d8(param_1);
    }
    goto LAB_01e6ece0;
  case 'g':
    if (pcVar15[1] == 't') {
      puVar6 = &DAT_00bcafaf;
      goto LAB_01e6ecd0;
    }
    if (pcVar15[1] == 'e') {
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00bb629d;
      goto LAB_01e6e5ac;
    }
    goto LAB_01e6d3a4;
  case 'i':
    if (pcVar15[1] != 'l') {
      if (pcVar15[1] == 'x') {
        *param_1 = (long)(pcVar15 + 2);
        lVar5 = FUN_01e6d368(param_1);
        if ((lVar5 != 0) && (lVar10 = FUN_01e6d368(param_1), lVar10 != 0)) {
          pvVar19 = (void *)param_1[0x266];
          lVar4 = *(long *)((long)pvVar19 + 8);
          puVar17 = pvVar19;
          if (0xfef < lVar4 + 0x20U) {
            puVar17 = malloc(0x1000);
            if (puVar17 == (void *)0x0) goto LAB_01e6f328;
            lVar4 = 0;
            *puVar17 = pvVar19;
            puVar17[1] = 0;
            param_1[0x266] = (long)puVar17;
          }
          *(long *)((long)puVar17 + 8) = lVar4 + 0x20;
          puVar9 = (undefined8 *)((long)puVar17 + lVar4 + 0x10);
          *puVar9 = &Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<AttachActionSets>b__9_1__;
          *(undefined4 *)((long)puVar17 + lVar4 + 0x18) = 0x1010130;
          *(long *)((long)puVar17 + lVar4 + 0x20) = lVar5;
          *(long *)((long)puVar17 + lVar4 + 0x28) = lVar10;
          break;
        }
      }
      goto LAB_01e6d3a4;
    }
    pcVar15 = pcVar15 + 2;
    *param_1 = (long)pcVar15;
    lVar5 = param_1[2];
    lVar10 = param_1[3];
    if (pcVar15 == pcVar12) goto LAB_01e6dc14;
    while (*pcVar15 != 'E') {
LAB_01e6dc14:
      do {
        local_60 = FUN_01e70dd4(param_1);
        if (local_60 == 0) goto LAB_01e6d3a4;
        FUN_01e6b668(param_1 + 2,&local_60);
        pcVar15 = (char *)*param_1;
      } while (pcVar15 == (char *)param_1[1]);
    }
    lVar5 = (lVar10 - lVar5 >> 3) * 8;
    *param_1 = (long)(pcVar15 + 1);
    auVar21 = FUN_01e74ad4(param_1,param_1[2] + lVar5,param_1[3]);
    pvVar19 = (void *)param_1[0x266];
    param_1[3] = param_1[2] + lVar5;
    lVar5 = *(long *)((long)pvVar19 + 8);
    puVar17 = pvVar19;
    if (0xfef < lVar5 + 0x30U) {
      puVar17 = malloc(0x1000);
      if (puVar17 == (void *)0x0) goto LAB_01e6f328;
      lVar5 = 0;
      *puVar17 = pvVar19;
      puVar17[1] = 0;
      param_1[0x266] = (long)puVar17;
    }
    *(long *)((long)puVar17 + 8) = lVar5 + 0x30;
    puVar9 = (undefined8 *)((long)puVar17 + lVar5 + 0x10);
    *puVar9 = &Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_34__;
    *(undefined4 *)((long)puVar17 + lVar5 + 0x18) = 0x101013d;
    *(undefined8 *)((long)puVar17 + lVar5 + 0x20) = 0;
    *(undefined1 (*) [16])((long)puVar17 + lVar5 + 0x28) = auVar21;
    break;
  case 'l':
    puVar9 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'S':
      puVar6 = &UNK_00bd3104;
LAB_01e6e360:
      *param_1 = (long)(pcVar15 + 2);
      puVar7 = puVar6 + 3;
      goto LAB_01e6ecd8;
    default:
      goto LAB_01e6d3ac;
    case 'e':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00bd9ae6;
      break;
    case 's':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00bd6518;
      break;
    case 't':
      puVar6 = &DAT_00bb42a6;
      goto LAB_01e6ecd0;
    }
    goto LAB_01e6e5ac;
  case 'm':
    puVar9 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'I':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00bbe395;
      goto LAB_01e6e5ac;
    case 'L':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00bc469c;
      goto LAB_01e6e5ac;
    case 'i':
      puVar6 = &DAT_00bbf9c2;
      goto LAB_01e6ecd0;
    case 'l':
      puVar6 = &DAT_00bc26de;
      goto LAB_01e6ecd0;
    case 'm':
      pcVar1 = pcVar15 + 2;
      *param_1 = (long)pcVar1;
      if ((pcVar1 == pcVar12) || (*pcVar1 != '_')) {
        lVar5 = FUN_01e6d368(param_1);
        if (lVar5 == 0) goto LAB_01e6d3a4;
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar9 = malloc(0x1000);
          if (puVar9 == (void *)0x0) goto LAB_01e6f328;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        lVar4 = (long)puVar9 + lVar10;
        puVar6 = &DAT_00be1c37;
LAB_01e6ed70:
        puVar9[1] = lVar10 + 0x30;
        puVar9 = (undefined8 *)(lVar4 + 0x10);
        *puVar9 = &Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_47__;
        *(undefined4 *)(lVar4 + 0x18) = 0x1010131;
        *(long *)(lVar4 + 0x20) = lVar5;
        *(undefined **)(lVar4 + 0x28) = puVar6;
        *(undefined **)(lVar4 + 0x30) = puVar6 + 2;
      }
      else {
        *param_1 = (long)(pcVar15 + 3);
        lVar5 = FUN_01e6d368(param_1);
        if (lVar5 == 0) goto LAB_01e6d3a4;
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar9 = malloc(0x1000);
          if (puVar9 == (void *)0x0) goto LAB_01e6f328;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        lVar4 = (long)puVar9 + lVar10;
        puVar6 = &DAT_00be1c37;
LAB_01e6e3f4:
        puVar9[1] = lVar10 + 0x30;
        puVar9 = (undefined8 *)(lVar4 + 0x10);
        *puVar9 = &Method_OVRPlugin_<>c_<_cctor>b__786_18__;
        puVar7 = puVar6 + 2;
LAB_01e6eb0c:
        *(undefined4 *)(puVar9 + 1) = 0x101013a;
        puVar9[2] = puVar6;
        puVar9[3] = puVar7;
        puVar9[4] = lVar5;
      }
    }
    break;
  case 'n':
    cVar2 = pcVar15[1];
    puVar9 = (undefined8 *)0x0;
    switch(cVar2) {
    case 'a':
    case 'w':
      if ((cVar2 == 'w') || (cVar2 == 'a')) {
        pcVar15 = pcVar15 + 2;
        *param_1 = (long)pcVar15;
        plVar18 = param_1 + 2;
        lVar5 = *plVar18;
        lVar10 = param_1[3];
        if (pcVar15 == pcVar12) goto LAB_01e6d5dc;
        while (*pcVar15 != '_') {
LAB_01e6d5dc:
          do {
            local_60 = FUN_01e6d368(param_1);
            if (local_60 == 0) goto LAB_01e6d3a4;
            FUN_01e6b668(plVar18,&local_60);
            pcVar15 = (char *)*param_1;
          } while (pcVar15 == (char *)param_1[1]);
        }
        lVar5 = (lVar10 - lVar5 >> 3) * 8;
        *param_1 = (long)(pcVar15 + 1);
        auVar21 = FUN_01e74ad4(param_1,param_1[2] + lVar5,param_1[3]);
        param_1[3] = param_1[2] + lVar5;
        lVar5 = FUN_01e6912c(param_1);
        if (lVar5 != 0) {
          pcVar15 = (char *)*param_1;
          pcVar12 = (char *)param_1[1];
          if ((((ulong)((long)pcVar12 - (long)pcVar15) < 2) || (*pcVar15 != 'p')) ||
             (pcVar15[1] != 'i')) {
            if ((pcVar15 == pcVar12) || (*pcVar15 != 'E')) break;
            pvVar19 = (void *)param_1[0x266];
            *param_1 = (long)(pcVar15 + 1);
            lVar10 = *(long *)((long)pvVar19 + 8);
            puVar17 = pvVar19;
            if (0xfef < lVar10 + 0x40U) {
              puVar17 = malloc(0x1000);
              if (puVar17 == (void *)0x0) goto LAB_01e6f328;
              lVar10 = 0;
              *puVar17 = pvVar19;
              puVar17[1] = 0;
              param_1[0x266] = (long)puVar17;
            }
            *(long *)((long)puVar17 + 8) = lVar10 + 0x40;
            puVar9 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
            *puVar9 = &Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_9__;
            *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010138;
            *(undefined1 (*) [16])((long)puVar17 + lVar10 + 0x20) = auVar21;
            *(undefined8 *)((long)puVar17 + lVar10 + 0x38) = 0;
            *(undefined8 *)((long)puVar17 + lVar10 + 0x40) = 0;
            *(long *)((long)puVar17 + lVar10 + 0x30) = lVar5;
            *(undefined1 *)((long)puVar17 + lVar10 + 0x48) = 0;
            *(bool *)((long)puVar17 + lVar10 + 0x49) = cVar2 == 'a';
          }
          else {
            lVar10 = param_1[2];
            lVar4 = param_1[3];
            pcVar15 = pcVar15 + 2;
            *param_1 = (long)pcVar15;
            if (pcVar15 == pcVar12) goto LAB_01e6ee20;
            while (*pcVar15 != 'E') {
LAB_01e6ee20:
              do {
                local_60 = FUN_01e6d368(param_1);
                if (local_60 == 0) goto LAB_01e6d3a4;
                FUN_01e6b668(plVar18,&local_60);
                pcVar15 = (char *)*param_1;
              } while (pcVar15 == (char *)param_1[1]);
            }
            lVar10 = (lVar4 - lVar10 >> 3) * 8;
            *param_1 = (long)(pcVar15 + 1);
            auVar22 = FUN_01e74ad4(param_1,param_1[2] + lVar10,param_1[3]);
            pvVar19 = (void *)param_1[0x266];
            param_1[3] = param_1[2] + lVar10;
            lVar10 = *(long *)((long)pvVar19 + 8);
            puVar17 = pvVar19;
            if (0xfef < lVar10 + 0x40U) {
              puVar17 = malloc(0x1000);
              if (puVar17 == (void *)0x0) goto LAB_01e6f328;
              lVar10 = 0;
              *puVar17 = pvVar19;
              puVar17[1] = 0;
              param_1[0x266] = (long)puVar17;
            }
            *(long *)((long)puVar17 + 8) = lVar10 + 0x40;
            puVar9 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
            *puVar9 = &Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_9__;
            *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010138;
            *(undefined1 (*) [16])((long)puVar17 + lVar10 + 0x20) = auVar21;
            *(long *)((long)puVar17 + lVar10 + 0x30) = lVar5;
            *(undefined1 (*) [16])((long)puVar17 + lVar10 + 0x38) = auVar22;
            *(undefined1 *)((long)puVar17 + lVar10 + 0x48) = 0;
            *(bool *)((long)puVar17 + lVar10 + 0x49) = cVar2 == 'a';
          }
          goto LAB_01e6d3ac;
        }
      }
      break;
    default:
      goto LAB_01e6d3ac;
    case 'e':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00bd81e0;
      goto LAB_01e6e5ac;
    case 'g':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6d368(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar9 = malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_01e6f328;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        lVar4 = lVar10 + 0x30;
        lVar10 = (long)puVar9 + lVar10;
        puVar6 = &DAT_00bbf9c2;
LAB_01e6eb00:
        puVar9[1] = lVar4;
        puVar9 = (undefined8 *)(lVar10 + 0x10);
        *puVar9 = &Method_OVRPlugin_<>c_<_cctor>b__786_18__;
        puVar7 = puVar6 + 1;
        goto LAB_01e6eb0c;
      }
      break;
    case 't':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6d368(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar9 = malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_01e6f328;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        lVar4 = lVar10 + 0x30;
        lVar10 = (long)puVar9 + lVar10;
        puVar6 = &DAT_00bc9968;
        goto LAB_01e6eb00;
      }
      break;
    case 'x':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6d368(param_1);
      if (lVar5 == 0) break;
      pvVar19 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar19 + 8);
      puVar17 = pvVar19;
      if (0xfef < lVar10 + 0x40U) {
        puVar17 = malloc(0x1000);
        if (puVar17 == (void *)0x0) goto LAB_01e6f328;
        lVar10 = 0;
        *puVar17 = pvVar19;
        puVar17[1] = 0;
        param_1[0x266] = (long)puVar17;
      }
      *(long *)((long)puVar17 + 8) = lVar10 + 0x40;
      pcVar15 = "noexcept (";
      puVar9 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
      *puVar9 = &
                Method_ToonPeople_Playanimation_<playanim>d__28_System_Collections_IEnumerator_Reset__
      ;
      *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010134;
      pcVar12 = "";
      goto LAB_01e6e900;
    }
    goto LAB_01e6d3a4;
  case 'o':
    puVar9 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'R':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00bd17f4;
      break;
    default:
      goto LAB_01e6d3ac;
    case 'n':
      goto code_r0x01e6d434;
    case 'o':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00bd0079;
      break;
    case 'r':
      puVar6 = &DAT_00bdd5a3;
      goto LAB_01e6ecd0;
    }
    goto LAB_01e6e5ac;
  case 'p':
    puVar9 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'L':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00bce3f4;
      goto LAB_01e6e5ac;
    default:
      goto LAB_01e6d3ac;
    case 'l':
      puVar6 = &DAT_00bd17f7;
      goto LAB_01e6ecd0;
    case 'm':
      puVar6 = &UNK_00bc5f64;
      goto LAB_01e6e360;
    case 'p':
      pcVar1 = pcVar15 + 2;
      *param_1 = (long)pcVar1;
      if ((pcVar1 == pcVar12) || (*pcVar1 != '_')) {
        lVar5 = FUN_01e6d368(param_1);
        if (lVar5 != 0) {
          puVar17 = (undefined8 *)param_1[0x266];
          lVar10 = puVar17[1];
          puVar9 = puVar17;
          if (0xfef < lVar10 + 0x30U) {
            puVar9 = malloc(0x1000);
            if (puVar9 == (undefined8 *)0x0) goto LAB_01e6f328;
            lVar10 = 0;
            *puVar9 = puVar17;
            puVar9[1] = 0;
            param_1[0x266] = (long)puVar9;
          }
          lVar4 = (long)puVar9 + lVar10;
          puVar6 = &DAT_00bb42a8;
          goto LAB_01e6ed70;
        }
      }
      else {
        *param_1 = (long)(pcVar15 + 3);
        lVar5 = FUN_01e6d368(param_1);
        if (lVar5 != 0) {
          puVar17 = (undefined8 *)param_1[0x266];
          lVar10 = puVar17[1];
          puVar9 = puVar17;
          if (0xfef < lVar10 + 0x30U) {
            puVar9 = malloc(0x1000);
            if (puVar9 == (undefined8 *)0x0) goto LAB_01e6f328;
            lVar10 = 0;
            *puVar9 = puVar17;
            puVar9[1] = 0;
            param_1[0x266] = (long)puVar9;
          }
          lVar4 = (long)puVar9 + lVar10;
          puVar6 = &DAT_00bb42a8;
          goto LAB_01e6e3f4;
        }
      }
      break;
    case 's':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6d368(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar9 = malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_01e6f328;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        lVar4 = lVar10 + 0x30;
        lVar10 = (long)puVar9 + lVar10;
        puVar6 = &DAT_00bd17f7;
        goto LAB_01e6eb00;
      }
      break;
    case 't':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6d368(param_1);
      if ((lVar5 != 0) && (lVar10 = FUN_01e6d368(param_1), lVar10 != 0)) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar4 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar4 + 0x30U) {
          puVar9 = malloc(0x1000);
          if (puVar9 == (void *)0x0) goto LAB_01e6f328;
          lVar4 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        lVar11 = (long)puVar9 + lVar4;
        puVar6 = &DAT_00bd4a51;
        goto LAB_01e6ec18;
      }
    }
    goto LAB_01e6d3a4;
  case 'q':
    if (pcVar15[1] == 'u') {
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6d368(param_1);
      if ((lVar5 != 0) && (lVar10 = FUN_01e6d368(param_1), lVar10 != 0)) {
        lVar4 = FUN_01e6d368(param_1);
        auVar21._8_8_ = lVar4;
        auVar21._0_8_ = lVar10;
        if (lVar4 != 0) {
          puVar17 = (undefined8 *)param_1[0x266];
          lVar10 = puVar17[1];
          puVar9 = puVar17;
          if (0xfef < lVar10 + 0x30U) {
            puVar9 = malloc(0x1000);
            if (puVar9 == (void *)0x0) goto LAB_01e6f328;
            lVar10 = 0;
            *puVar9 = puVar17;
            puVar9[1] = 0;
            param_1[0x266] = (long)puVar9;
          }
          uVar14 = 0x132;
          lVar4 = lVar10 + 0x30;
          lVar10 = (long)puVar9 + lVar10;
          ppuVar13 = &Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__;
          goto LAB_01e6f26c;
        }
      }
    }
    goto LAB_01e6d3a4;
  case 'r':
    puVar9 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'M':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00bd9ae9;
      break;
    default:
      goto LAB_01e6d3ac;
    case 'S':
      puVar6 = &DAT_00bce3f7;
      goto LAB_01e6e360;
    case 'c':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6912c(param_1);
      if ((lVar5 != 0) && (lVar10 = FUN_01e6d368(param_1), lVar10 != 0)) {
        pvVar19 = (void *)param_1[0x266];
        lVar4 = *(long *)((long)pvVar19 + 8);
        puVar9 = pvVar19;
        if (0xfef < lVar4 + 0x30U) {
          puVar9 = malloc(0x1000);
          if (puVar9 == (void *)0x0) goto LAB_01e6f328;
          lVar4 = 0;
          *puVar9 = pvVar19;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        pcVar15 = "reinterpret_cast";
        *(long *)((long)puVar9 + 8) = lVar4 + 0x30;
        puVar9 = (undefined8 *)((long)puVar9 + lVar4 + 0x10);
        *puVar9 = &Method_OVRPlugin_<>c_<_cctor>b__786_30__;
        pcVar12 = "";
        goto LAB_01e6ea84;
      }
      goto LAB_01e6d3a4;
    case 'm':
      puVar6 = &DAT_00be630a;
      goto LAB_01e6ecd0;
    case 's':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &DAT_00bb9184;
    }
LAB_01e6e5ac:
    puVar7 = puVar6 + 2;
LAB_01e6ecd8:
    puVar9 = (undefined8 *)FUN_01e706e0(param_1,puVar6,puVar7);
LAB_01e6ece0:
    if (*(long *)(lVar3 + 0x28) == local_58) {
      return puVar9;
    }
    goto LAB_01e6f32c;
  case 's':
    puVar9 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'P':
      pcVar15 = pcVar15 + 2;
      *param_1 = (long)pcVar15;
      lVar5 = param_1[2];
      lVar10 = param_1[3];
      if (pcVar15 == pcVar12) goto LAB_01e6d99c;
      while (*pcVar15 != 'E') {
LAB_01e6d99c:
        do {
          local_60 = FUN_01e6b478(param_1);
          if (local_60 == 0) goto LAB_01e6d3a4;
          FUN_01e6b668(param_1 + 2,&local_60);
          pcVar15 = (char *)*param_1;
        } while (pcVar15 == (char *)param_1[1]);
      }
      lVar5 = (lVar10 - lVar5 >> 3) * 8;
      *param_1 = (long)(pcVar15 + 1);
      auVar21 = FUN_01e74ad4(param_1,param_1[2] + lVar5,param_1[3]);
      pvVar19 = (void *)param_1[0x266];
      param_1[3] = param_1[2] + lVar5;
      lVar5 = *(long *)((long)pvVar19 + 8);
      puVar9 = pvVar19;
      if (0xfef < lVar5 + 0x20U) {
        puVar9 = malloc(0x1000);
        if (puVar9 == (void *)0x0) goto LAB_01e6f328;
        lVar5 = 0;
        *puVar9 = pvVar19;
        puVar9[1] = 0;
        param_1[0x266] = (long)puVar9;
      }
      *(long *)((long)puVar9 + 8) = lVar5 + 0x20;
      puVar20 = (undefined8 *)((long)puVar9 + lVar5 + 0x10);
      *puVar20 = &Method_UnityEngine_Rendering_ProbeBrickIndex_<>c_<AddBricks>b__39_0__;
      *(undefined4 *)((long)puVar9 + lVar5 + 0x18) = 0x1010100;
      *(undefined1 (*) [16])((long)puVar9 + lVar5 + 0x20) = auVar21;
      pvVar19 = (void *)param_1[0x266];
      lVar5 = *(long *)((long)pvVar19 + 8);
      puVar17 = pvVar19;
      if (0xfef < lVar5 + 0x40U) {
        puVar17 = malloc(0x1000);
        if (puVar17 == (void *)0x0) goto LAB_01e6f328;
        lVar5 = 0;
        *puVar17 = pvVar19;
        puVar17[1] = 0;
        param_1[0x266] = (long)puVar17;
      }
      *(long *)((long)puVar17 + 8) = lVar5 + 0x40;
      puVar9 = (undefined8 *)((long)puVar17 + lVar5 + 0x10);
      *puVar9 = &
                Method_ToonPeople_Playanimation_<playanim>d__28_System_Collections_IEnumerator_Reset__
      ;
      *(undefined4 *)((long)puVar17 + lVar5 + 0x18) = 0x1010134;
      *(char **)((long)puVar17 + lVar5 + 0x20) = "sizeof... (";
      *(char **)((long)puVar17 + lVar5 + 0x28) = "";
      *(undefined8 **)((long)puVar17 + lVar5 + 0x30) = puVar20;
      goto LAB_01e6e90c;
    default:
      goto LAB_01e6d3ac;
    case 'Z':
      pcVar15 = pcVar15 + 2;
      *param_1 = (long)pcVar15;
      if (pcVar12 != pcVar15) {
        if (*pcVar15 == 'f') {
          lVar5 = FUN_01e6fe18(param_1);
          if (lVar5 != 0) {
            pvVar19 = (void *)param_1[0x266];
            lVar10 = *(long *)((long)pvVar19 + 8);
            puVar17 = pvVar19;
            if (0xfef < lVar10 + 0x40U) {
              puVar17 = malloc(0x1000);
              if (puVar17 == (void *)0x0) goto LAB_01e6f328;
              lVar10 = 0;
              *puVar17 = pvVar19;
              puVar17[1] = 0;
              param_1[0x266] = (long)puVar17;
            }
            *(long *)((long)puVar17 + 8) = lVar10 + 0x40;
            pcVar15 = "sizeof... (";
            puVar9 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
            *puVar9 = &
                      Method_ToonPeople_Playanimation_<playanim>d__28_System_Collections_IEnumerator_Reset__
            ;
            *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010134;
            pcVar12 = "";
            goto LAB_01e6e900;
          }
        }
        else if ((*pcVar15 == 'T') && (lVar5 = FUN_01e6c3e8(param_1), lVar5 != 0)) {
          puVar17 = (undefined8 *)param_1[0x266];
          lVar10 = puVar17[1];
          puVar9 = puVar17;
          if (0xfef < lVar10 + 0x20U) {
            puVar9 = malloc(0x1000);
            if (puVar9 == (undefined8 *)0x0) goto LAB_01e6f328;
            lVar10 = 0;
            *puVar9 = puVar17;
            puVar9[1] = 0;
            param_1[0x266] = (long)puVar9;
          }
          uVar14 = 0x136;
          lVar4 = lVar10 + 0x20;
          lVar10 = (long)puVar9 + lVar10;
          ppuVar13 = &Method_UnityEngine_UIElements_PointerMoveEvent_<>c_<_cctor>b__0_0__;
          goto LAB_01e6e848;
        }
      }
      break;
    case 'c':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6912c(param_1);
      if ((lVar5 != 0) && (lVar10 = FUN_01e6d368(param_1), lVar10 != 0)) {
        pvVar19 = (void *)param_1[0x266];
        lVar4 = *(long *)((long)pvVar19 + 8);
        puVar9 = pvVar19;
        if (0xfef < lVar4 + 0x30U) {
          puVar9 = malloc(0x1000);
          if (puVar9 == (void *)0x0) goto LAB_01e6f328;
          lVar4 = 0;
          *puVar9 = pvVar19;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        pcVar15 = "static_cast";
        *(long *)((long)puVar9 + 8) = lVar4 + 0x30;
        puVar9 = (undefined8 *)((long)puVar9 + lVar4 + 0x10);
        *puVar9 = &Method_OVRPlugin_<>c_<_cctor>b__786_30__;
        pcVar12 = "";
        goto LAB_01e6ea84;
      }
      break;
    case 'p':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6d368(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x20U) {
          puVar9 = malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_01e6f328;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        uVar14 = 0x122;
        lVar4 = lVar10 + 0x20;
        lVar10 = (long)puVar9 + lVar10;
        ppuVar13 = &Method_OVRPlugin_<>c_<_cctor>b__786_130__;
        goto LAB_01e6e848;
      }
      break;
    case 'r':
      goto code_r0x01e6d434;
    case 't':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6912c(param_1);
      goto joined_r0x01e6e890;
    case 'z':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6d368(param_1);
joined_r0x01e6e890:
      if (lVar5 == 0) break;
      pvVar19 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar19 + 8);
      puVar9 = pvVar19;
      if (0xfef < lVar10 + 0x40U) {
        puVar9 = malloc(0x1000);
        if (puVar9 == (void *)0x0) goto LAB_01e6f328;
        lVar10 = 0;
        *puVar9 = pvVar19;
        puVar9[1] = 0;
        param_1[0x266] = (long)puVar9;
      }
      *(long *)((long)puVar9 + 8) = lVar10 + 0x40;
      lVar10 = (long)puVar9 + lVar10;
      pcVar15 = "sizeof (";
LAB_01e6e8ec:
      puVar9 = (undefined8 *)(lVar10 + 0x10);
      *puVar9 = &
                Method_ToonPeople_Playanimation_<playanim>d__28_System_Collections_IEnumerator_Reset__
      ;
      *(undefined4 *)(lVar10 + 0x18) = 0x1010134;
      pcVar12 = pcVar15 + 8;
      goto LAB_01e6e900;
    }
LAB_01e6d3a4:
                    /* catch() { ... } // from try @ 01e6cb4c with catch @ 01e6d3a4 */
    puVar9 = (undefined8 *)0x0;
    break;
  case 't':
    puVar9 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'e':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6d368(param_1);
      goto joined_r0x01e6dcfc;
    case 'i':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6912c(param_1);
joined_r0x01e6dcfc:
      if (lVar5 == 0) goto LAB_01e6d3a4;
      pvVar19 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar19 + 8);
      puVar9 = pvVar19;
      if (0xfef < lVar10 + 0x40U) {
        puVar9 = malloc(0x1000);
        if (puVar9 == (void *)0x0) goto LAB_01e6f328;
        lVar10 = 0;
        *puVar9 = pvVar19;
        puVar9[1] = 0;
        param_1[0x266] = (long)puVar9;
      }
      *(long *)((long)puVar9 + 8) = lVar10 + 0x40;
      lVar10 = (long)puVar9 + lVar10;
      pcVar15 = "typeid (";
      goto LAB_01e6e8ec;
    case 'l':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6912c(param_1);
      if (lVar5 != 0) {
        lVar10 = param_1[2];
        lVar4 = param_1[3];
        while( true ) {
          pcVar15 = (char *)*param_1;
          if ((pcVar15 != (char *)param_1[1]) && (*pcVar15 == 'E')) {
            lVar10 = (lVar4 - lVar10 >> 3) * 8;
            *param_1 = (long)(pcVar15 + 1);
            auVar21 = FUN_01e74ad4(param_1,param_1[2] + lVar10,param_1[3]);
            puVar17 = (undefined8 *)param_1[0x266];
            param_1[3] = param_1[2] + lVar10;
            lVar10 = puVar17[1];
            puVar9 = puVar17;
            if (0xfef < lVar10 + 0x30U) {
              puVar9 = malloc(0x1000);
              if (puVar9 == (undefined8 *)0x0) goto LAB_01e6f328;
              lVar10 = 0;
              *puVar9 = puVar17;
              puVar9[1] = 0;
              param_1[0x266] = (long)puVar9;
            }
            uVar14 = 0x13d;
            lVar4 = lVar10 + 0x30;
            lVar10 = (long)puVar9 + lVar10;
            ppuVar13 = &Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_34__;
            goto LAB_01e6f26c;
          }
          local_60 = FUN_01e70dd4(param_1);
          if (local_60 == 0) break;
          FUN_01e6b668(param_1 + 2,&local_60);
        }
      }
      goto LAB_01e6d3a4;
    case 'r':
      pvVar19 = (void *)param_1[0x266];
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = *(long *)((long)pvVar19 + 8);
      puVar17 = pvVar19;
      if (0xfef < lVar5 + 0x20U) {
        puVar17 = malloc(0x1000);
        if (puVar17 == (void *)0x0) goto LAB_01e6f328;
        lVar5 = 0;
        *puVar17 = pvVar19;
        puVar17[1] = 0;
        param_1[0x266] = (long)puVar17;
      }
      *(long *)((long)puVar17 + 8) = lVar5 + 0x20;
      puVar9 = (undefined8 *)((long)puVar17 + lVar5 + 0x10);
      *puVar9 = &Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_95__;
      *(undefined4 *)((long)puVar17 + lVar5 + 0x18) = 0x1010107;
      *(char **)((long)puVar17 + lVar5 + 0x20) = "throw";
      *(char **)((long)puVar17 + lVar5 + 0x28) = "";
      break;
    case 'w':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_01e6d368(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar9 = puVar17;
        if (0xfef < lVar10 + 0x20U) {
          puVar9 = malloc(0x1000);
          if (puVar9 == (undefined8 *)0x0) goto LAB_01e6f328;
          lVar10 = 0;
          *puVar9 = puVar17;
          puVar9[1] = 0;
          param_1[0x266] = (long)puVar9;
        }
        uVar14 = 0x13f;
        lVar4 = lVar10 + 0x20;
        lVar10 = (long)puVar9 + lVar10;
        ppuVar13 = &Method_UnityEngine_Rendering_ProbeReferenceVolume_<>c_<RegisterDebug>b__171_40__
        ;
        goto LAB_01e6e848;
      }
      goto LAB_01e6d3a4;
    }
  }
LAB_01e6d3ac:
                    /* catch() { ... } // from try @ 01e6d01c with catch @ 01e6d3ac */
                    /* catch() { ... } // from try @ 01e6c924 with catch @ 01e6d3b0 */
                    /* catch() { ... } // from try @ 01e6c78c with catch @ 01e6d3b4
                       catch() { ... } // from try @ 01e6ce70 with catch @ 01e6d3b4
                       catch() { ... } // from try @ 01e6d2c0 with catch @ 01e6d3b4 */
                    /* catch() { ... } // from try @ 01e6cec8 with catch @ 01e6d3b8
                       catch() { ... } // from try @ 01e6d314 with catch @ 01e6d3b8
                       catch() { ... } // from try @ 01e6d330 with catch @ 01e6d3b8
                       catch() { ... } // from try @ 01e6d350 with catch @ 01e6d3b8
                       catch() { ... } // from try @ 01e6d364 with catch @ 01e6d3b8 */
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return puVar9;
  }
LAB_01e6f32c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


