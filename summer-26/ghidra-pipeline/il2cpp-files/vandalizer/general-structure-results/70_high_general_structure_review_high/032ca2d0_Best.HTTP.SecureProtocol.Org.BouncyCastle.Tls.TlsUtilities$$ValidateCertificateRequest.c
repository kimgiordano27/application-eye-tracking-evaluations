/*
FUNCTION_NAME: Best.HTTP.SecureProtocol.Org.BouncyCastle.Tls.TlsUtilities$$ValidateCertificateRequest
ENTRY_POINT: 032ca2d0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


/* WARNING: Type propagation algorithm not settling */

undefined4
Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_TlsUtilities__ValidateCertificateRequest
          (long *param_1)

{
  byte *pbVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  void *pvVar14;
  undefined1 *puVar15;
  ulong uVar16;
  byte *pbVar17;
  uint *puVar18;
  ulong uVar19;
  size_t sVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  byte *pbVar25;
  uint *unaff_x19;
  byte *pbVar26;
  byte *unaff_x20;
  undefined4 uVar27;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  ulong uVar28;
  uint unaff_w24;
  ulong unaff_x25;
  long *plVar29;
  undefined1 *unaff_x27;
  uint *unaff_x28;
  long unaff_x29;
  void *in_stack_00000010;
  undefined1 *in_stack_00000018;
  char *in_stack_00000020;
  char *in_stack_00000028;
  undefined8 in_stack_00000030;
  uint *in_stack_00000038;
  long in_stack_00000040;
  byte *in_stack_00000048;
  byte *in_stack_00000058;
  long *in_stack_00000060;
  code *in_stack_00000068;
  uint *in_stack_00000070;
  long *in_stack_00000078;
  undefined8 in_stack_00000080;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> in_stack_00000088;
  ulong in_stack_00000090;
  void *in_stack_00000098;
  byte in_stack_000000a0;
  ulong in_stack_000000a8;
  char *in_stack_000000b0;
  byte in_stack_000000b8;
  ulong in_stack_000000c0;
  char *in_stack_000000c8;
  byte in_stack_000000d0;
  ulong in_stack_000000d8;
  byte *in_stack_000000e0;
  byte in_stack_000000e8;
  ulong in_stack_000000f0;
  byte *in_stack_000000f8;
  byte bStack0000000000000100;
  char cStack0000000000000104;
  undefined8 in_stack_00000108;
  
code_r0x032ca2d0:
  (**(code **)(*param_1 + 0x50))();
LAB_032ca1e8:
  unaff_x20 = unaff_x20 + 1;
  uVar28 = (ulong)(in_stack_000000d0 >> 1);
  pbVar17 = in_stack_00000058;
  if ((in_stack_000000d0 & 1) != 0) {
    uVar28 = in_stack_000000d8;
    pbVar17 = in_stack_000000e0;
  }
  pbVar17 = pbVar17 + uVar28;
LAB_032ca20c:
  if (unaff_x20 != pbVar17) {
    plVar29 = (long *)*unaff_x21;
    if ((plVar29 == (long *)0x0) || (plVar29[3] != plVar29[4])) {
joined_r0x032ca228:
      if (unaff_x22 == (long *)0x0) goto LAB_032ca288;
LAB_032ca22c:
      if ((unaff_x22[3] == unaff_x22[4]) &&
         (iVar12 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22), iVar12 == -1)) goto LAB_032ca288;
      if (plVar29 != (long *)0x0) goto LAB_032ca2e0;
    }
    else {
      iVar12 = (**(code **)(*plVar29 + 0x48))(plVar29);
      if (iVar12 == -1) {
        plVar29 = (long *)0x0;
        *unaff_x21 = 0;
        goto joined_r0x032ca228;
      }
      plVar29 = (long *)*unaff_x21;
      if (unaff_x22 != (long *)0x0) goto LAB_032ca22c;
LAB_032ca288:
      unaff_x22 = (long *)0x0;
      if (plVar29 == (long *)0x0) goto LAB_032ca2e0;
    }
    plVar29 = (long *)*unaff_x21;
    if ((byte *)plVar29[3] == (byte *)plVar29[4]) {
      bVar10 = (**(code **)(*plVar29 + 0x48))();
    }
    else {
      bVar10 = *(byte *)plVar29[3];
    }
    if (*unaff_x20 == bVar10) goto code_r0x032ca2c0;
  }
LAB_032ca2e0:
  uVar28 = unaff_x25;
  pbVar17 = in_stack_00000048;
  if ((unaff_w24 >> 9 & 1) != 0) {
    uVar16 = (ulong)(in_stack_000000d0 >> 1);
    pbVar26 = in_stack_00000058;
    if ((in_stack_000000d0 & 1) != 0) {
      uVar16 = in_stack_000000d8;
      pbVar26 = in_stack_000000e0;
    }
    if (unaff_x20 != pbVar26 + uVar16) goto LAB_032caaf4;
  }
switchD_032c9c24_default:
  in_stack_00000048 = pbVar17;
  unaff_x25 = uVar28 + 1;
  if (unaff_x25 != 4) {
    plVar29 = (long *)*unaff_x21;
    if ((plVar29 == (long *)0x0) || (plVar29[3] != plVar29[4])) {
joined_r0x032c9b98:
      if (unaff_x22 == (long *)0x0) goto LAB_032c9bf8;
LAB_032c9b9c:
      if ((unaff_x22[3] == unaff_x22[4]) &&
         (iVar12 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22), iVar12 == -1)) goto LAB_032c9bf8;
      if (plVar29 != (long *)0x0) goto LAB_032ca880;
    }
    else {
      iVar12 = (**(code **)(*plVar29 + 0x48))(plVar29);
      if (iVar12 == -1) {
        plVar29 = (long *)0x0;
        *unaff_x21 = 0;
        goto joined_r0x032c9b98;
      }
      plVar29 = (long *)*unaff_x21;
      if (unaff_x22 != (long *)0x0) goto LAB_032c9b9c;
LAB_032c9bf8:
      unaff_x22 = (long *)0x0;
      if (plVar29 == (long *)0x0) goto LAB_032ca880;
    }
    goto LAB_032c9c00;
  }
  goto LAB_032ca880;
code_r0x032ca2c0:
  param_1 = (long *)*unaff_x21;
  if (param_1[3] == param_1[4]) goto code_r0x032ca2d0;
  param_1[3] = param_1[3] + 1;
  goto LAB_032ca1e8;
LAB_032c9c00:
  lVar5 = uVar28 + 1;
  uVar28 = unaff_x25;
  pbVar17 = in_stack_00000048;
  switch(*(undefined1 *)((long)&stack0x00000108 + lVar5)) {
  case 0:
    if (unaff_x25 == 3) goto LAB_032ca880;
    break;
  case 1:
    if (unaff_x25 == 3) {
LAB_032ca880:
      if (in_stack_00000048 == (byte *)0x0) goto LAB_032ca9a4;
      uVar28 = 1;
      goto LAB_032ca89c;
    }
    plVar29 = (long *)*unaff_x21;
    if ((byte *)plVar29[3] == (byte *)plVar29[4]) {
      uVar13 = (**(code **)(*plVar29 + 0x48))();
    }
    else {
      uVar13 = (uint)*(byte *)plVar29[3];
    }
    if (((uVar13 >> 7 & 1) != 0) ||
       ((*(ulong *)(*(long *)(unaff_x23 + 0x10) + (ulong)(uVar13 & 0xff) * 8) & 1) == 0))
    goto LAB_032caaf4;
    plVar29 = (long *)*unaff_x21;
    pcVar3 = (char *)plVar29[3];
    if (pcVar3 == (char *)plVar29[4]) {
      cVar8 = (**(code **)(*plVar29 + 0x50))();
    }
    else {
      plVar29[3] = (long)(pcVar3 + 1);
      cVar8 = *pcVar3;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(&stack0x00000088,cVar8);
    break;
  case 2:
    pbVar17 = in_stack_00000058;
    if ((unaff_x25 < 2) || (in_stack_00000048 != (byte *)0x0)) {
      bVar7 = (in_stack_000000d0 & 1) == 0;
      if (!bVar7) {
        pbVar17 = in_stack_000000e0;
      }
      unaff_x20 = pbVar17;
      if (unaff_x25 == 0) goto LAB_032ca1c8;
      goto Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_TlsUtilities__InitKeyExchangeServer;
    }
    if (((unaff_x25 == 2 && in_stack_00000108._3_1_ != '\0') | in_stack_00000030._4_4_) != 1) {
      in_stack_00000048 = (byte *)0x0;
      pbVar17 = in_stack_00000048;
      goto switchD_032c9c24_default;
    }
    bVar7 = (in_stack_000000d0 & 1) == 0;
    if (!bVar7) {
      pbVar17 = in_stack_000000e0;
    }
Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_TlsUtilities__InitKeyExchangeServer:
    unaff_x20 = pbVar17;
    if (*(byte *)((long)&stack0x00000108 + (ulong)((int)unaff_x25 - 1)) < 2) {
      uVar28 = (ulong)(in_stack_000000d0 >> 1);
      if (!bVar7) {
        uVar28 = in_stack_000000d8;
      }
      pbVar26 = pbVar17;
      if (uVar28 != 0) {
        pbVar1 = pbVar17 + uVar28;
        pbVar25 = pbVar17;
        do {
          pbVar26 = pbVar25;
          if (((char)*pbVar25 < '\0') ||
             ((*(ulong *)(*(long *)(unaff_x23 + 0x10) + (ulong)*pbVar25 * 8) & 1) == 0)) break;
          uVar28 = uVar28 - 1;
          pbVar25 = pbVar25 + 1;
          pbVar26 = pbVar1;
        } while (uVar28 != 0);
      }
      uVar28 = (long)pbVar26 - (long)pbVar17;
      if (((byte)in_stack_00000088 & 1) == 0) {
        uVar16 = (ulong)((byte)in_stack_00000088 >> 1);
        if (uVar16 < uVar28) goto LAB_032ca1c8;
        puVar15 = &stack0x00000089 + uVar16;
        pvVar14 = in_stack_00000010;
      }
      else {
        if (in_stack_00000090 < uVar28) goto LAB_032ca1c8;
        puVar15 = (undefined1 *)((long)in_stack_00000098 + in_stack_00000090);
        uVar16 = in_stack_00000090;
        pvVar14 = in_stack_00000098;
      }
      unaff_x20 = pbVar26;
      if ((long)puVar15 - uVar28 != (long)pvVar14 + uVar16) {
        pbVar25 = (byte *)0x0;
        do {
          unaff_x20 = pbVar17;
          if (pbVar25[(long)puVar15 - uVar28] != pbVar17[(long)pbVar25]) break;
          pbVar25 = pbVar25 + 1;
          unaff_x20 = pbVar26;
        } while ((byte *)((long)pvVar14 +
                         (long)(pbVar26 + ((uVar16 - (long)puVar15) - (long)pbVar17))) != pbVar25);
      }
    }
LAB_032ca1c8:
    uVar28 = (ulong)(in_stack_000000d0 >> 1);
    if (!bVar7) {
      uVar28 = in_stack_000000d8;
    }
    pbVar17 = pbVar17 + uVar28;
    goto LAB_032ca20c;
  case 3:
    uVar19 = (ulong)in_stack_000000b8;
    bVar10 = in_stack_000000b8 & 1;
    uVar16 = (ulong)(in_stack_000000b8 >> 1);
    if ((in_stack_000000b8 & 1) != 0) {
      uVar16 = in_stack_000000c0;
    }
    uVar2 = (ulong)(in_stack_000000a0 >> 1);
    if ((in_stack_000000a0 & 1) != 0) {
      uVar2 = in_stack_000000a8;
    }
    if (uVar16 + uVar2 == 0) goto switchD_032c9c24_default;
    if (uVar16 == 0) {
      plVar29 = (long *)*unaff_x21;
      if ((char *)plVar29[3] == (char *)plVar29[4]) {
        cVar8 = (**(code **)(*plVar29 + 0x48))();
      }
      else {
        cVar8 = *(char *)plVar29[3];
      }
      pcVar3 = in_stack_00000020;
      if ((in_stack_000000a0 & 1) != 0) {
        pcVar3 = in_stack_000000b0;
      }
      if (*pcVar3 != cVar8) goto switchD_032c9c24_default;
      plVar29 = (long *)*unaff_x21;
      if (plVar29[3] == plVar29[4]) {
        (**(code **)(*plVar29 + 0x50))();
      }
      else {
        plVar29[3] = plVar29[3] + 1;
      }
      *in_stack_00000018 = 1;
      uVar16 = (ulong)(in_stack_000000a0 >> 1);
      if ((in_stack_000000a0 & 1) != 0) {
        uVar16 = in_stack_000000a8;
      }
LAB_032ca830:
      pbVar17 = &stack0x000000a0;
      if (uVar16 < 2) {
        pbVar17 = in_stack_00000048;
      }
      goto switchD_032c9c24_default;
    }
    plVar29 = (long *)*unaff_x21;
    pcVar3 = (char *)plVar29[3];
    if (uVar2 == 0) {
      if (pcVar3 == (char *)plVar29[4]) {
        cVar8 = (**(code **)(*plVar29 + 0x48))();
        uVar19 = (ulong)in_stack_000000b8;
        bVar10 = in_stack_000000b8 & 1;
      }
      else {
        cVar8 = *pcVar3;
      }
      pcVar3 = in_stack_00000028;
      if (bVar10 != 0) {
        pcVar3 = in_stack_000000c8;
      }
      if (*pcVar3 != cVar8) {
        *in_stack_00000018 = 1;
        goto switchD_032c9c24_default;
      }
      plVar29 = (long *)*unaff_x21;
      if (plVar29[3] != plVar29[4]) {
        plVar29[3] = plVar29[3] + 1;
        goto LAB_032ca858;
      }
      (**(code **)(*plVar29 + 0x50))();
    }
    else {
      if (pcVar3 == (char *)plVar29[4]) {
        cVar8 = (**(code **)(*plVar29 + 0x48))();
        uVar19 = (ulong)in_stack_000000b8;
        bVar10 = in_stack_000000b8 & 1;
      }
      else {
        cVar8 = *pcVar3;
      }
      plVar29 = (long *)*unaff_x21;
      pcVar3 = in_stack_00000028;
      if (bVar10 != 0) {
        pcVar3 = in_stack_000000c8;
      }
      pcVar4 = (char *)plVar29[3];
      if (*pcVar3 != cVar8) {
        if (pcVar4 == (char *)plVar29[4]) {
          cVar8 = (**(code **)(*plVar29 + 0x48))(plVar29);
        }
        else {
          cVar8 = *pcVar4;
        }
        pcVar3 = in_stack_00000020;
        if ((in_stack_000000a0 & 1) != 0) {
          pcVar3 = in_stack_000000b0;
        }
        if (*pcVar3 != cVar8) goto LAB_032caaf4;
        plVar29 = (long *)*unaff_x21;
        if (plVar29[3] == plVar29[4]) {
          (**(code **)(*plVar29 + 0x50))();
        }
        else {
          plVar29[3] = plVar29[3] + 1;
        }
        *in_stack_00000018 = 1;
        uVar16 = (ulong)(in_stack_000000a0 >> 1);
        if ((in_stack_000000a0 & 1) != 0) {
          uVar16 = in_stack_000000a8;
        }
        goto LAB_032ca830;
      }
      if (pcVar4 != (char *)plVar29[4]) {
        plVar29[3] = (long)(pcVar4 + 1);
        goto LAB_032ca858;
      }
      (**(code **)(*plVar29 + 0x50))(plVar29);
    }
    uVar19 = (ulong)in_stack_000000b8;
    bVar10 = in_stack_000000b8 & 1;
LAB_032ca858:
    uVar16 = uVar19 >> 1;
    if (bVar10 != 0) {
      uVar16 = in_stack_000000c0;
    }
    pbVar17 = &stack0x000000b8;
    if (uVar16 < 2) {
      pbVar17 = in_stack_00000048;
    }
    goto switchD_032c9c24_default;
  case 4:
    uVar13 = 0;
    puVar24 = unaff_x19;
LAB_032c9c4c:
    plVar29 = (long *)*unaff_x21;
    if ((plVar29 == (long *)0x0) || (plVar29[3] != plVar29[4])) {
joined_r0x032c9c60:
      if (unaff_x22 == (long *)0x0) goto LAB_032c9cc0;
LAB_032c9c64:
      if ((unaff_x22[3] == unaff_x22[4]) &&
         (iVar12 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22), iVar12 == -1)) goto LAB_032c9cc0;
      if (plVar29 != (long *)0x0) goto LAB_032c9f4c;
    }
    else {
      iVar12 = (**(code **)(*plVar29 + 0x48))(plVar29);
      if (iVar12 == -1) {
        plVar29 = (long *)0x0;
        *unaff_x21 = 0;
        goto joined_r0x032c9c60;
      }
      plVar29 = (long *)*unaff_x21;
      if (unaff_x22 != (long *)0x0) goto LAB_032c9c64;
LAB_032c9cc0:
      unaff_x22 = (long *)0x0;
      if (plVar29 == (long *)0x0) goto LAB_032c9f4c;
    }
    plVar29 = (long *)*unaff_x21;
    if ((byte *)plVar29[3] != (byte *)plVar29[4]) {
      bVar10 = *(byte *)plVar29[3];
      uVar11 = (uint)bVar10;
      uVar6 = (uint)bVar10;
      if (-1 < (char)bVar10) goto LAB_032c9cf8;
LAB_032c9d08:
      uVar16 = (ulong)(in_stack_000000e8 >> 1);
      if ((in_stack_000000e8 & 1) != 0) {
        uVar16 = in_stack_000000f0;
      }
      if ((((uint)bStack0000000000000100 == (uVar11 & 0xff)) && (uVar13 != 0)) && (uVar16 != 0)) {
        if (puVar24 != in_stack_00000070) {
LAB_032c9e08:
          *puVar24 = uVar13;
          uVar13 = 0;
          puVar24 = puVar24 + 1;
          goto LAB_032c9e5c;
        }
        uVar16 = (long)in_stack_00000070 - (long)unaff_x28;
        sVar20 = 4;
        if (uVar16 != 0) {
          sVar20 = uVar16 * 2;
        }
        if (0x7ffffffffffffffe < uVar16) {
          sVar20 = 0xffffffffffffffff;
        }
        if (in_stack_00000068 ==
            (code *)
            Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationBase<SceneInstance>_InvokeExecute__
           ) {
          unaff_x28 = malloc(sVar20);
        }
        else {
          unaff_x28 = realloc(unaff_x28,sVar20);
        }
        if (unaff_x28 != (uint *)0x0) {
          in_stack_00000070 = (uint *)((long)unaff_x28 + (sVar20 & 0xfffffffffffffffc));
          puVar24 = (uint *)((long)unaff_x28 + uVar16);
          in_stack_00000068 =
               (code *)
               Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationBase<SceneInstance>_ShortenPath__
          ;
          goto LAB_032c9e08;
        }
        std::__throw_bad_alloc();
LAB_032cabac:
        std::__throw_bad_alloc();
LAB_032cabb0:
        std::__throw_bad_alloc();
        goto LAB_032cabb8;
      }
      goto LAB_032c9f4c;
    }
    uVar11 = (**(code **)(*plVar29 + 0x48))();
    uVar6 = uVar11;
    if ((uVar11 >> 7 & 1) != 0) goto LAB_032c9d08;
LAB_032c9cf8:
    uVar11 = uVar6;
    if (((uint)*(undefined8 *)(*(long *)(unaff_x23 + 0x10) + (ulong)(uVar11 & 0xff) * 8) >> 6 & 1)
        == 0) goto LAB_032c9d08;
    puVar15 = (undefined1 *)*in_stack_00000078;
    if (puVar15 == unaff_x27) {
      uVar16 = (long)unaff_x27 - *in_stack_00000060;
      sVar20 = uVar16 * 2;
      if (uVar16 == 0) {
        sVar20 = 1;
      }
      if (0x7ffffffffffffffe < uVar16) {
        sVar20 = 0xffffffffffffffff;
      }
      if ((undefined *)in_stack_00000060[1] ==
          Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationBase<SceneInstance>_InvokeExecute__
         ) {
        pvVar14 = malloc(sVar20);
      }
      else {
        pvVar14 = realloc((void *)*in_stack_00000060,sVar20);
      }
      if (pvVar14 != (void *)0x0) {
        *in_stack_00000060 = (long)pvVar14;
        in_stack_00000060[1] =
             (long)
             Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationBase<SceneInstance>_ShortenPath__
        ;
        puVar15 = (undefined1 *)((long)pvVar14 + uVar16);
        *in_stack_00000078 = (long)puVar15;
        unaff_x27 = (undefined1 *)(*in_stack_00000060 + sVar20);
        goto LAB_032c9e4c;
      }
      goto LAB_032cabac;
    }
LAB_032c9e4c:
    uVar13 = uVar13 + 1;
    *in_stack_00000078 = (long)(puVar15 + 1);
    *puVar15 = (char)uVar11;
LAB_032c9e5c:
    plVar29 = (long *)*unaff_x21;
    if (plVar29[3] == plVar29[4]) {
      (**(code **)(*plVar29 + 0x50))();
    }
    else {
      plVar29[3] = plVar29[3] + 1;
    }
    goto LAB_032c9c4c;
  default:
    goto switchD_032c9c24_default;
  }
  do {
    plVar29 = (long *)*unaff_x21;
    if ((plVar29 == (long *)0x0) || (plVar29[3] != plVar29[4])) {
joined_r0x032ca0d4:
      if (unaff_x22 == (long *)0x0) goto LAB_032ca134;
LAB_032ca0d8:
      if ((unaff_x22[3] == unaff_x22[4]) &&
         (iVar12 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22), iVar12 == -1)) goto LAB_032ca134;
      if (plVar29 != (long *)0x0) goto switchD_032c9c24_default;
    }
    else {
      iVar12 = (**(code **)(*plVar29 + 0x48))(plVar29);
      if (iVar12 == -1) {
        plVar29 = (long *)0x0;
        *unaff_x21 = 0;
        goto joined_r0x032ca0d4;
      }
      plVar29 = (long *)*unaff_x21;
      if (unaff_x22 != (long *)0x0) goto LAB_032ca0d8;
LAB_032ca134:
      unaff_x22 = (long *)0x0;
      if (plVar29 == (long *)0x0) goto switchD_032c9c24_default;
    }
    plVar29 = (long *)*unaff_x21;
    if ((byte *)plVar29[3] == (byte *)plVar29[4]) {
      uVar13 = (**(code **)(*plVar29 + 0x48))();
    }
    else {
      uVar13 = (uint)*(byte *)plVar29[3];
    }
    if (((uVar13 >> 7 & 1) != 0) ||
       ((*(ulong *)(*(long *)(unaff_x23 + 0x10) + (ulong)(uVar13 & 0xff) * 8) & 1) == 0))
    goto switchD_032c9c24_default;
    plVar29 = (long *)*unaff_x21;
    pcVar3 = (char *)plVar29[3];
    if (pcVar3 == (char *)plVar29[4]) {
      cVar8 = (**(code **)(*plVar29 + 0x50))();
    }
    else {
      plVar29[3] = (long)(pcVar3 + 1);
      cVar8 = *pcVar3;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(&stack0x00000088,cVar8);
  } while( true );
LAB_032c9f4c:
  unaff_x19 = puVar24;
  if ((unaff_x28 != puVar24) && (uVar13 != 0)) {
    if (puVar24 == in_stack_00000070) {
      uVar16 = (long)in_stack_00000070 - (long)unaff_x28;
      sVar20 = 4;
      if (uVar16 != 0) {
        sVar20 = uVar16 * 2;
      }
      if (0x7ffffffffffffffe < uVar16) {
        sVar20 = 0xffffffffffffffff;
      }
      if (in_stack_00000068 ==
          (code *)
          Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationBase<SceneInstance>_InvokeExecute__
         ) {
        unaff_x28 = malloc(sVar20);
      }
      else {
        unaff_x28 = realloc(unaff_x28,sVar20);
      }
      if (unaff_x28 == (uint *)0x0) {
LAB_032cabb8:
        std::__throw_bad_alloc();
        goto LAB_032cabc0;
      }
      in_stack_00000070 = (uint *)((long)unaff_x28 + (sVar20 & 0xfffffffffffffffc));
      puVar24 = (uint *)((long)unaff_x28 + uVar16);
      in_stack_00000068 =
           (code *)
           Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationBase<SceneInstance>_ShortenPath__
      ;
    }
    unaff_x19 = puVar24 + 1;
    *puVar24 = uVar13;
  }
  if (0 < in_stack_00000080._4_4_) {
    plVar29 = (long *)*unaff_x21;
    if ((plVar29 != (long *)0x0) && (plVar29[3] == plVar29[4])) {
      iVar12 = (**(code **)(*plVar29 + 0x48))(plVar29);
      if (iVar12 == -1) {
        plVar29 = (long *)0x0;
        *unaff_x21 = 0;
      }
      else {
        plVar29 = (long *)*unaff_x21;
      }
    }
    if ((unaff_x22 == (long *)0x0) ||
       ((unaff_x22[3] == unaff_x22[4] &&
        (iVar12 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22), iVar12 == -1)))) {
      if (plVar29 == (long *)0x0) goto LAB_032caaf4;
      unaff_x22 = (long *)0x0;
    }
    else if (plVar29 != (long *)0x0) goto LAB_032caaf4;
    plVar29 = (long *)*unaff_x21;
    if ((char *)plVar29[3] == (char *)plVar29[4]) {
      cVar8 = (**(code **)(*plVar29 + 0x48))();
    }
    else {
      cVar8 = *(char *)plVar29[3];
    }
    if (cStack0000000000000104 == cVar8) {
      plVar29 = (long *)*unaff_x21;
      if (plVar29[3] == plVar29[4]) {
        (**(code **)(*plVar29 + 0x50))();
      }
      else {
        plVar29[3] = plVar29[3] + 1;
      }
joined_r0x032ca52c:
      if (0 < in_stack_00000080._4_4_) {
        do {
          plVar29 = (long *)*unaff_x21;
          if ((plVar29 == (long *)0x0) || (plVar29[3] != plVar29[4])) {
joined_r0x032ca570:
            if (unaff_x22 == (long *)0x0) goto LAB_032ca5d0;
LAB_032ca574:
            if ((unaff_x22[3] == unaff_x22[4]) &&
               (iVar12 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22), iVar12 == -1))
            goto LAB_032ca5d0;
            if (plVar29 != (long *)0x0) goto LAB_032caaf4;
          }
          else {
            iVar12 = (**(code **)(*plVar29 + 0x48))(plVar29);
            if (iVar12 == -1) {
              plVar29 = (long *)0x0;
              *unaff_x21 = 0;
              goto joined_r0x032ca570;
            }
            plVar29 = (long *)*unaff_x21;
            if (unaff_x22 != (long *)0x0) goto LAB_032ca574;
LAB_032ca5d0:
            if (plVar29 == (long *)0x0) goto LAB_032caaf4;
            unaff_x22 = (long *)0x0;
          }
          plVar29 = (long *)*unaff_x21;
          if ((byte *)plVar29[3] == (byte *)plVar29[4]) {
            uVar13 = (**(code **)(*plVar29 + 0x48))();
          }
          else {
            uVar13 = (uint)*(byte *)plVar29[3];
          }
          if (((uVar13 >> 7 & 1) != 0) ||
             (((uint)*(undefined8 *)(*(long *)(unaff_x23 + 0x10) + (ulong)(uVar13 & 0xff) * 8) >> 6
              & 1) == 0)) goto LAB_032caaf4;
          puVar15 = (undefined1 *)*in_stack_00000078;
          if (puVar15 == unaff_x27) {
            uVar16 = (long)unaff_x27 - *in_stack_00000060;
            sVar20 = uVar16 * 2;
            if (uVar16 == 0) {
              sVar20 = 1;
            }
            if (0x7ffffffffffffffe < uVar16) {
              sVar20 = 0xffffffffffffffff;
            }
            if ((undefined *)in_stack_00000060[1] ==
                Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationBase<SceneInstance>_InvokeExecute__
               ) {
              pvVar14 = malloc(sVar20);
            }
            else {
              pvVar14 = realloc((void *)*in_stack_00000060,sVar20);
            }
            if (pvVar14 == (void *)0x0) goto LAB_032cabb0;
            *in_stack_00000060 = (long)pvVar14;
            in_stack_00000060[1] =
                 (long)
                 Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationBase<SceneInstance>_ShortenPath__
            ;
            puVar15 = (undefined1 *)((long)pvVar14 + uVar16);
            *in_stack_00000078 = (long)puVar15;
            unaff_x27 = (undefined1 *)(*in_stack_00000060 + sVar20);
          }
          plVar29 = (long *)*unaff_x21;
          if ((undefined1 *)plVar29[3] == (undefined1 *)plVar29[4]) {
            uVar9 = (**(code **)(*plVar29 + 0x48))();
            puVar15 = (undefined1 *)*in_stack_00000078;
          }
          else {
            uVar9 = *(undefined1 *)plVar29[3];
          }
          *in_stack_00000078 = (long)(puVar15 + 1);
          *puVar15 = uVar9;
          in_stack_00000080._4_4_ = in_stack_00000080._4_4_ + -1;
          plVar29 = (long *)*unaff_x21;
          if (plVar29[3] != plVar29[4]) goto LAB_032ca54c;
          (**(code **)(*plVar29 + 0x50))();
          if (in_stack_00000080._4_4_ < 1) break;
        } while( true );
      }
      goto LAB_032ca530;
    }
    goto LAB_032caaf4;
  }
LAB_032ca530:
  if (*in_stack_00000078 == *in_stack_00000060) goto LAB_032caaf4;
  goto switchD_032c9c24_default;
LAB_032ca54c:
  plVar29[3] = plVar29[3] + 1;
  goto joined_r0x032ca52c;
LAB_032ca89c:
  if ((*in_stack_00000048 & 1) == 0) {
    uVar16 = (ulong)(*in_stack_00000048 >> 1);
  }
  else {
    uVar16 = *(ulong *)(in_stack_00000048 + 8);
  }
  if (uVar16 <= uVar28) goto LAB_032ca9a4;
  plVar29 = (long *)*unaff_x21;
  if ((plVar29 == (long *)0x0) || (plVar29[3] != plVar29[4])) {
joined_r0x032ca8d8:
    if (unaff_x22 == (long *)0x0) goto LAB_032ca938;
LAB_032ca8dc:
    if ((unaff_x22[3] == unaff_x22[4]) &&
       (iVar12 = (**(code **)(*unaff_x22 + 0x48))(unaff_x22), iVar12 == -1)) goto LAB_032ca938;
    if (plVar29 != (long *)0x0) goto LAB_032caaf4;
  }
  else {
    iVar12 = (**(code **)(*plVar29 + 0x48))(plVar29);
    if (iVar12 == -1) {
      plVar29 = (long *)0x0;
      *unaff_x21 = 0;
      goto joined_r0x032ca8d8;
    }
    plVar29 = (long *)*unaff_x21;
    if (unaff_x22 != (long *)0x0) goto LAB_032ca8dc;
LAB_032ca938:
    if (plVar29 == (long *)0x0) goto LAB_032caaf4;
    unaff_x22 = (long *)0x0;
  }
  plVar29 = (long *)*unaff_x21;
  if ((byte *)plVar29[3] == (byte *)plVar29[4]) {
    bVar10 = (**(code **)(*plVar29 + 0x48))();
  }
  else {
    bVar10 = *(byte *)plVar29[3];
  }
  pbVar17 = in_stack_00000048 + 1;
  if ((*in_stack_00000048 & 1) != 0) {
    pbVar17 = *(byte **)(in_stack_00000048 + 0x10);
  }
  if (pbVar17[uVar28] != bVar10) goto LAB_032caaf4;
  plVar29 = (long *)*unaff_x21;
  uVar28 = (ulong)((int)uVar28 + 1);
  if (plVar29[3] == plVar29[4]) {
    (**(code **)(*plVar29 + 0x50))();
  }
  else {
    plVar29[3] = plVar29[3] + 1;
  }
  goto LAB_032ca89c;
LAB_032ca9a4:
  if (unaff_x28 == unaff_x19) {
    uVar27 = 1;
    unaff_x28 = unaff_x19;
  }
  else {
    uVar28 = (ulong)(in_stack_000000e8 >> 1);
    if ((in_stack_000000e8 & 1) != 0) {
      uVar28 = in_stack_000000f0;
    }
    if ((uVar28 != 0) && (4 < (long)unaff_x19 - (long)unaff_x28)) {
      puVar18 = unaff_x19 + -1;
      puVar22 = puVar18;
      puVar24 = unaff_x28;
      if (unaff_x28 < puVar18) {
        do {
          puVar21 = puVar24 + 1;
          uVar13 = *puVar24;
          *puVar24 = *puVar22;
          puVar23 = puVar22 + -1;
          *puVar22 = uVar13;
          puVar22 = puVar23;
          puVar24 = puVar21;
        } while (puVar21 < puVar23);
        pbVar26 = (byte *)((ulong)&stack0x000000e8 | 1);
        if ((in_stack_000000e8 & 1) != 0) {
          pbVar26 = in_stack_000000f8;
        }
        pbVar17 = pbVar26;
        if (unaff_x28 < puVar18) {
          puVar24 = unaff_x28;
          uVar28 = (ulong)(in_stack_000000e8 >> 1);
          if ((in_stack_000000e8 & 1) != 0) {
            uVar28 = in_stack_000000f0;
          }
          do {
            bVar10 = *pbVar17;
            if (((bVar10 != 0) && (bVar10 != 0xff)) && (*puVar24 != (uint)bVar10))
            goto LAB_032caaf4;
            puVar24 = puVar24 + 1;
            if (1 < (long)(pbVar26 + (uVar28 - (long)pbVar17))) {
              pbVar17 = pbVar17 + 1;
            }
          } while (puVar24 < puVar18);
        }
      }
      else {
        pbVar17 = (byte *)((ulong)&stack0x000000e8 | 1);
        if ((in_stack_000000e8 & 1) != 0) {
          pbVar17 = in_stack_000000f8;
        }
      }
      bVar10 = *pbVar17;
      if (((bVar10 != 0) && (bVar10 != 0xff)) && ((uint)bVar10 <= *puVar18 - 1)) {
LAB_032caaf4:
        uVar27 = 0;
        *in_stack_00000038 = *in_stack_00000038 | 4;
        goto joined_r0x032caac8;
      }
    }
    uVar27 = 1;
  }
joined_r0x032caac8:
  if (((byte)in_stack_00000088 & 1) != 0) {
    operator_delete(in_stack_00000098);
  }
  if ((in_stack_000000a0 & 1) != 0) {
    operator_delete(in_stack_000000b0);
  }
  if ((in_stack_000000b8 & 1) != 0) {
    operator_delete(in_stack_000000c8);
  }
  if ((in_stack_000000d0 & 1) != 0) {
    operator_delete(in_stack_000000e0);
  }
  if ((in_stack_000000e8 & 1) != 0) {
    operator_delete(in_stack_000000f8);
  }
  if (unaff_x28 != (uint *)0x0) {
    (*in_stack_00000068)(unaff_x28);
  }
  if (*(long *)(in_stack_00000040 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return uVar27;
  }
LAB_032cabc0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


