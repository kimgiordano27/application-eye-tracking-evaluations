/*
FUNCTION_NAME: VRReady.Scripts.OVR.OVRManagerHelper$$.ctor
ENTRY_POINT: 01cb93a0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


void VRReady_Scripts_OVR_OVRManagerHelper___ctor(byte *param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar2;
  long *plVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  byte *pbVar11;
  undefined1 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  byte *unaff_x22;
  long unaff_x23;
  void *pvVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  byte *unaff_x25;
  byte *unaff_x26;
  size_t __n;
  byte *unaff_x27;
  void *__dest;
  byte *pbVar16;
  long unaff_x29;
  long in_stack_00000008;
  void *in_stack_00000010;
  undefined8 in_stack_00000018;
  byte *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined1 *in_stack_00000030;
  
code_r0x01cb93a0:
  if (!(bool)in_CY || (bool)in_ZR) {
    iVar14 = *(int *)(unaff_x29 + -0xc);
  }
  else {
    pbVar16 = param_1 + -1;
    bVar1 = *pbVar16;
    *unaff_x21 = (long)(unaff_x27 + 1);
    iVar13 = *(int *)(unaff_x29 + -0xc);
    *unaff_x27 = bVar1;
    iVar14 = in_stack_00000028._4_4_;
    uVar6 = in_stack_00000018._4_4_;
    if ((1 < iVar13) && (unaff_x26 < pbVar16)) {
      pbVar11 = param_1 + -2;
      iVar13 = in_stack_00000028._4_4_;
      do {
        pbVar16 = pbVar11;
        pbVar11 = (byte *)*unaff_x21;
        bVar1 = *pbVar16;
        iVar14 = iVar13 + -1;
        uVar6 = (uint)(iVar14 != 0 && 0 < iVar13);
        *unaff_x21 = (long)(pbVar11 + 1);
        *pbVar11 = bVar1;
        if (iVar13 < 2) break;
        pbVar11 = pbVar16 + -1;
        iVar13 = iVar14;
      } while (unaff_x26 < pbVar16);
    }
    param_1 = pbVar16;
    if (uVar6 == 0) {
      uVar2 = 0;
      goto joined_r0x01cb94f8;
    }
  }
  uVar2 = (**(code **)(**(long **)(unaff_x29 + -8) + 0x38))(*(long **)(unaff_x29 + -8),0x30);
joined_r0x01cb94f8:
  if (0 < iVar14) {
    iVar14 = iVar14 + 1;
    do {
      puVar5 = (undefined1 *)*unaff_x21;
      iVar14 = iVar14 + -1;
      *unaff_x21 = (long)(puVar5 + 1);
      *puVar5 = uVar2;
    } while (1 < iVar14);
  }
  puVar5 = (undefined1 *)*unaff_x21;
  plVar15 = *(long **)(unaff_x29 + -0x30);
  *unaff_x21 = (long)(puVar5 + 1);
  *puVar5 = (char)*(undefined4 *)(unaff_x29 + -0x34);
  if (param_1 == unaff_x26) goto LAB_01cb9474;
LAB_01cb953c:
  if ((*unaff_x22 & 1) == 0) {
    pbVar16 = in_stack_00000020;
    if (1 < *unaff_x22) {
LAB_01cb9560:
      uVar6 = (uint)*pbVar16;
      goto LAB_01cb956c;
    }
  }
  else if (*(long *)(unaff_x22 + 8) != 0) {
    pbVar16 = *(byte **)(unaff_x22 + 0x10);
    goto LAB_01cb9560;
  }
  uVar6 = 0xffffffff;
LAB_01cb956c:
  uVar9 = 0;
  uVar10 = 0;
  do {
    if (uVar10 == uVar6) {
      puVar5 = (undefined1 *)*unaff_x21;
      uVar10 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar10;
      *unaff_x21 = (long)(puVar5 + 1);
      *puVar5 = unaff_w19;
      if ((*unaff_x22 & 1) == 0) {
        if (uVar10 < *unaff_x22 >> 1) {
          bVar1 = unaff_x22[uVar9 + 1];
joined_r0x01cb95f4:
          uVar6 = (uint)bVar1;
          if (uVar6 == 0xff) {
            uVar10 = 0;
            uVar6 = 0xffffffff;
            goto LAB_01cb957c;
          }
        }
      }
      else if (uVar9 < *(ulong *)(unaff_x22 + 8)) {
        bVar1 = *(byte *)(*(long *)(unaff_x22 + 0x10) + uVar9);
        goto joined_r0x01cb95f4;
      }
      uVar10 = 0;
    }
LAB_01cb957c:
    param_1 = param_1 + -1;
    bVar1 = *param_1;
    pbVar16 = (byte *)*unaff_x21;
    uVar10 = uVar10 + 1;
    *unaff_x21 = (long)(pbVar16 + 1);
    *pbVar16 = bVar1;
  } while (unaff_x26 != param_1);
LAB_01cb9498:
  if (unaff_x27 == (byte *)*unaff_x21) {
    pbVar16 = *(byte **)(unaff_x29 + -0x18);
  }
  else {
    pbVar16 = *(byte **)(unaff_x29 + -0x18);
    pbVar11 = (byte *)*unaff_x21 + -1;
    if (unaff_x27 < pbVar11) {
      do {
        pbVar8 = unaff_x27 + 1;
        bVar1 = *unaff_x27;
        *unaff_x27 = *pbVar11;
        pbVar4 = pbVar11 + -1;
        *pbVar11 = bVar1;
        pbVar11 = pbVar4;
        unaff_x27 = pbVar8;
      } while (pbVar8 < pbVar4);
    }
  }
  do {
    unaff_x23 = unaff_x23 + 1;
    if (unaff_x23 == 4) {
      bVar1 = *pbVar16;
      if ((bVar1 & 1) == 0) {
        if (bVar1 < 4) goto LAB_01cb966c;
        uVar9 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar9 = *(ulong *)(pbVar16 + 8);
        if (uVar9 < 2) goto LAB_01cb966c;
        in_stack_00000030 = *(undefined1 **)(pbVar16 + 0x10);
      }
      pvVar12 = (void *)*unaff_x21;
      memmove(pvVar12,in_stack_00000030 + 1,uVar9 - 1);
      plVar15 = *(long **)(unaff_x29 + -0x30);
      *unaff_x21 = (long)pvVar12 + (uVar9 - 1);
LAB_01cb966c:
      uVar6 = *(uint *)(unaff_x29 + -0x1c) & 0xb0;
      if (uVar6 != 0x10) {
        if (uVar6 == 0x20) {
          in_stack_00000008 = *unaff_x21;
        }
        *plVar15 = in_stack_00000008;
      }
      return;
    }
    switch(*(undefined1 *)(unaff_x20 + unaff_x23)) {
    case 0:
      *plVar15 = *unaff_x21;
      break;
    case 1:
      plVar3 = *(long **)(unaff_x29 + -8);
      *plVar15 = *unaff_x21;
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,0x20);
      puVar5 = (undefined1 *)*unaff_x21;
      *unaff_x21 = (long)(puVar5 + 1);
      *puVar5 = uVar2;
      break;
    case 2:
      pbVar11 = *(byte **)(unaff_x29 + -0x28);
      bVar1 = *pbVar11;
      if ((bVar1 & 1) == 0) {
        if (((*(uint *)(unaff_x29 + -0x1c) >> 9 & 1) == 0) || (bVar1 < 2)) break;
        __n = (size_t)(bVar1 >> 1);
        pvVar12 = in_stack_00000010;
      }
      else {
        if (((*(uint *)(unaff_x29 + -0x1c) >> 9 & 1) == 0) ||
           (__n = *(size_t *)(pbVar11 + 8), __n == 0)) break;
        pvVar12 = *(void **)(pbVar11 + 0x10);
      }
      __dest = (void *)*unaff_x21;
      memmove(__dest,pvVar12,__n);
      pbVar16 = *(byte **)(unaff_x29 + -0x18);
      *unaff_x21 = (long)__dest + __n;
      break;
    case 3:
      if ((*pbVar16 & 1) == 0) {
        puVar5 = in_stack_00000030;
        if (*pbVar16 < 2) break;
      }
      else {
        if (*(long *)(pbVar16 + 8) == 0) break;
        puVar5 = *(undefined1 **)(pbVar16 + 0x10);
      }
      puVar7 = (undefined1 *)*unaff_x21;
      uVar2 = *puVar5;
      *unaff_x21 = (long)(puVar7 + 1);
      *puVar7 = uVar2;
      break;
    case 4:
      goto code_r0x01cb9344;
    }
  } while( true );
code_r0x01cb9344:
  if ((*(uint *)(unaff_x29 + -0x20) & 1) != 0) {
    unaff_x26 = unaff_x26 + 1;
  }
  param_1 = unaff_x26;
  if (unaff_x26 < unaff_x25) {
    pbVar16 = unaff_x26;
    do {
      param_1 = pbVar16;
      if (((char)*pbVar16 < '\0') ||
         (((uint)*(undefined8 *)(*(long *)(*(long *)(unaff_x29 + -8) + 0x10) + (ulong)*pbVar16 * 8)
           >> 6 & 1) == 0)) break;
      pbVar16 = pbVar16 + 1;
      param_1 = unaff_x25;
    } while (unaff_x25 != pbVar16);
  }
  unaff_x27 = (byte *)*unaff_x21;
  if (0 < *(int *)(unaff_x29 + -0xc)) {
    in_CY = unaff_x26 <= param_1;
    in_ZR = param_1 == unaff_x26;
    goto code_r0x01cb93a0;
  }
  if (param_1 != unaff_x26) goto LAB_01cb953c;
LAB_01cb9474:
  uVar2 = (**(code **)(**(long **)(unaff_x29 + -8) + 0x38))(*(long **)(unaff_x29 + -8),0x30);
  puVar5 = (undefined1 *)*unaff_x21;
  *unaff_x21 = (long)(puVar5 + 1);
  *puVar5 = uVar2;
  goto LAB_01cb9498;
}


