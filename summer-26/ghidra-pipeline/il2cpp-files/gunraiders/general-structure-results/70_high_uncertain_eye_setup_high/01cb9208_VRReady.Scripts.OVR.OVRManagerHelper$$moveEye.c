/*
FUNCTION_NAME: VRReady.Scripts.OVR.OVRManagerHelper$$moveEye
ENTRY_POINT: 01cb9208
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


void VRReady_Scripts_OVR_OVRManagerHelper__moveEye
               (long param_1,long *param_2,long *param_3,undefined4 param_4,byte *param_5,
               byte *param_6,undefined8 param_7,undefined4 param_8,undefined8 param_9,
               undefined8 param_10,void *param_11)

{
  byte bVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  int in_w9;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 in_w10;
  uint uVar9;
  undefined1 unaff_w19;
  long unaff_x20;
  byte *unaff_x22;
  long lVar10;
  void *pvVar11;
  int iVar12;
  int iVar13;
  size_t __n;
  byte *pbVar14;
  byte *unaff_x28;
  void *__dest;
  byte *pbVar15;
  long unaff_x29;
  uint uStack000000000000001c;
  byte *pbStack0000000000000020;
  int iStack000000000000002c;
  byte *pbStack0000000000000030;
  
  pbStack0000000000000030 = unaff_x28 + 1;
  iStack000000000000002c = in_w9 + -1;
  lVar10 = 0;
  *(undefined4 *)(unaff_x29 + -0x34) = in_w10;
  pbStack0000000000000020 = unaff_x22 + 1;
  *(undefined4 *)(unaff_x29 + -0x20) = param_8;
  *(undefined4 *)(unaff_x29 + -0x1c) = param_4;
  *(undefined8 *)(unaff_x29 + -8) = param_7;
  *param_3 = param_1;
  *(int *)(unaff_x29 + -0xc) = in_w9;
  uStack000000000000001c = (uint)(iStack000000000000002c != 0 && 0 < in_w9);
  *(long **)(unaff_x29 + -0x30) = param_2;
  *(byte **)(unaff_x29 + -0x18) = unaff_x28;
  param_10 = param_1;
  do {
    switch(*(undefined1 *)(unaff_x20 + lVar10)) {
    case 0:
      *param_2 = *param_3;
      break;
    case 1:
      plVar3 = *(long **)(unaff_x29 + -8);
      *param_2 = *param_3;
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,0x20);
      puVar4 = (undefined1 *)*param_3;
      *param_3 = (long)(puVar4 + 1);
      *puVar4 = uVar2;
      break;
    case 2:
      pbVar8 = *(byte **)(unaff_x29 + -0x28);
      bVar1 = *pbVar8;
      if ((bVar1 & 1) == 0) {
        if (((*(uint *)(unaff_x29 + -0x1c) >> 9 & 1) != 0) && (1 < bVar1)) {
          __n = (size_t)(bVar1 >> 1);
          pvVar11 = param_11;
LAB_01cb9268:
          __dest = (void *)*param_3;
          memmove(__dest,pvVar11,__n);
          unaff_x28 = *(byte **)(unaff_x29 + -0x18);
          *param_3 = (long)__dest + __n;
        }
      }
      else if (((*(uint *)(unaff_x29 + -0x1c) >> 9 & 1) != 0) &&
              (__n = *(size_t *)(pbVar8 + 8), __n != 0)) {
        pvVar11 = *(void **)(pbVar8 + 0x10);
        goto LAB_01cb9268;
      }
      break;
    case 3:
      if ((*unaff_x28 & 1) == 0) {
        pbVar8 = pbStack0000000000000030;
        if (1 < *unaff_x28) {
LAB_01cb9450:
          pbVar14 = (byte *)*param_3;
          bVar1 = *pbVar8;
          *param_3 = (long)(pbVar14 + 1);
          *pbVar14 = bVar1;
        }
      }
      else if (*(long *)(unaff_x28 + 8) != 0) {
        pbVar8 = *(byte **)(unaff_x28 + 0x10);
        goto LAB_01cb9450;
      }
      break;
    case 4:
      if ((*(uint *)(unaff_x29 + -0x20) & 1) != 0) {
        param_5 = param_5 + 1;
      }
      pbVar8 = param_5;
      if (param_5 < param_6) {
        pbVar14 = param_5;
        do {
          pbVar8 = pbVar14;
          if (((char)*pbVar14 < '\0') ||
             (((uint)*(undefined8 *)
                      (*(long *)(*(long *)(unaff_x29 + -8) + 0x10) + (ulong)*pbVar14 * 8) >> 6 & 1)
              == 0)) break;
          pbVar14 = pbVar14 + 1;
          pbVar8 = param_6;
        } while (param_6 != pbVar14);
      }
      pbVar14 = (byte *)*param_3;
      if (*(int *)(unaff_x29 + -0xc) < 1) {
        if (pbVar8 != param_5) goto LAB_01cb953c;
LAB_01cb9474:
        uVar2 = (**(code **)(**(long **)(unaff_x29 + -8) + 0x38))(*(long **)(unaff_x29 + -8),0x30);
        puVar4 = (undefined1 *)*param_3;
        *param_3 = (long)(puVar4 + 1);
        *puVar4 = uVar2;
      }
      else {
        if (param_5 < pbVar8) {
          pbVar15 = pbVar8 + -1;
          bVar1 = *pbVar15;
          *param_3 = (long)(pbVar14 + 1);
          iVar12 = *(int *)(unaff_x29 + -0xc);
          *pbVar14 = bVar1;
          iVar13 = iStack000000000000002c;
          uVar6 = uStack000000000000001c;
          if ((1 < iVar12) && (param_5 < pbVar15)) {
            pbVar8 = pbVar8 + -2;
            iVar12 = iStack000000000000002c;
            do {
              pbVar15 = pbVar8;
              pbVar8 = (byte *)*param_3;
              bVar1 = *pbVar15;
              iVar13 = iVar12 + -1;
              uVar6 = (uint)(iVar13 != 0 && 0 < iVar12);
              *param_3 = (long)(pbVar8 + 1);
              *pbVar8 = bVar1;
              if (iVar12 < 2) break;
              pbVar8 = pbVar15 + -1;
              iVar12 = iVar13;
            } while (param_5 < pbVar15);
          }
          pbVar8 = pbVar15;
          if (uVar6 != 0) goto LAB_01cb94e0;
          uVar2 = 0;
        }
        else {
          iVar13 = *(int *)(unaff_x29 + -0xc);
LAB_01cb94e0:
          uVar2 = (**(code **)(**(long **)(unaff_x29 + -8) + 0x38))(*(long **)(unaff_x29 + -8),0x30)
          ;
        }
        if (0 < iVar13) {
          iVar13 = iVar13 + 1;
          do {
            puVar4 = (undefined1 *)*param_3;
            iVar13 = iVar13 + -1;
            *param_3 = (long)(puVar4 + 1);
            *puVar4 = uVar2;
          } while (1 < iVar13);
        }
        puVar4 = (undefined1 *)*param_3;
        param_2 = *(long **)(unaff_x29 + -0x30);
        *param_3 = (long)(puVar4 + 1);
        *puVar4 = (char)*(undefined4 *)(unaff_x29 + -0x34);
        if (pbVar8 == param_5) goto LAB_01cb9474;
LAB_01cb953c:
        if ((*unaff_x22 & 1) == 0) {
          pbVar15 = pbStack0000000000000020;
          if (1 < *unaff_x22) goto LAB_01cb9560;
LAB_01cb9568:
          uVar6 = 0xffffffff;
        }
        else {
          if (*(long *)(unaff_x22 + 8) == 0) goto LAB_01cb9568;
          pbVar15 = *(byte **)(unaff_x22 + 0x10);
LAB_01cb9560:
          uVar6 = (uint)*pbVar15;
        }
        uVar5 = 0;
        uVar9 = 0;
        do {
          if (uVar9 == uVar6) {
            puVar4 = (undefined1 *)*param_3;
            uVar9 = (int)uVar5 + 1;
            uVar5 = (ulong)uVar9;
            *param_3 = (long)(puVar4 + 1);
            *puVar4 = unaff_w19;
            if ((*unaff_x22 & 1) == 0) {
              if (uVar9 < *unaff_x22 >> 1) {
                bVar1 = unaff_x22[uVar5 + 1];
joined_r0x01cb95f4:
                uVar6 = (uint)bVar1;
                if (uVar6 == 0xff) {
                  uVar9 = 0;
                  uVar6 = 0xffffffff;
                  goto LAB_01cb957c;
                }
              }
            }
            else if (uVar5 < *(ulong *)(unaff_x22 + 8)) {
              bVar1 = *(byte *)(*(long *)(unaff_x22 + 0x10) + uVar5);
              goto joined_r0x01cb95f4;
            }
            uVar9 = 0;
          }
LAB_01cb957c:
          pbVar8 = pbVar8 + -1;
          bVar1 = *pbVar8;
          pbVar15 = (byte *)*param_3;
          uVar9 = uVar9 + 1;
          *param_3 = (long)(pbVar15 + 1);
          *pbVar15 = bVar1;
        } while (param_5 != pbVar8);
      }
      if (pbVar14 == (byte *)*param_3) {
        unaff_x28 = *(byte **)(unaff_x29 + -0x18);
      }
      else {
        unaff_x28 = *(byte **)(unaff_x29 + -0x18);
        pbVar8 = (byte *)*param_3 + -1;
        if (pbVar14 < pbVar8) {
          do {
            pbVar7 = pbVar14 + 1;
            bVar1 = *pbVar14;
            *pbVar14 = *pbVar8;
            pbVar15 = pbVar8 + -1;
            *pbVar8 = bVar1;
            pbVar8 = pbVar15;
            pbVar14 = pbVar7;
          } while (pbVar7 < pbVar15);
        }
      }
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 4);
  bVar1 = *unaff_x28;
  if ((bVar1 & 1) == 0) {
    if (bVar1 < 4) goto LAB_01cb966c;
    uVar5 = (ulong)(bVar1 >> 1);
    pbVar8 = pbStack0000000000000030;
  }
  else {
    uVar5 = *(ulong *)(unaff_x28 + 8);
    if (uVar5 < 2) goto LAB_01cb966c;
    pbVar8 = *(byte **)(unaff_x28 + 0x10);
  }
  pvVar11 = (void *)*param_3;
  memmove(pvVar11,pbVar8 + 1,uVar5 - 1);
  param_2 = *(long **)(unaff_x29 + -0x30);
  *param_3 = (long)pvVar11 + (uVar5 - 1);
LAB_01cb966c:
  uVar6 = *(uint *)(unaff_x29 + -0x1c) & 0xb0;
  if (uVar6 != 0x10) {
    if (uVar6 == 0x20) {
      param_10 = *param_3;
    }
    *param_2 = param_10;
  }
  return;
}


