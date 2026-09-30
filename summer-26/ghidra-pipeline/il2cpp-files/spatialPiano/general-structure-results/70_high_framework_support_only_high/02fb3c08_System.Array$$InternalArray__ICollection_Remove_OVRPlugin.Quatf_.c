/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Quatf>
ENTRY_POINT: 02fb3c08
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_Quatf>(void)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  __locale_t p_Var6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  byte *unaff_x19;
  long *unaff_x20;
  byte *unaff_x21;
  uint uVar16;
  long unaff_x22;
  uint uVar17;
  undefined8 *unaff_x23;
  byte *unaff_x24;
  ulong uVar18;
  long *unaff_x25;
  uint unaff_w26;
  long lVar19;
  byte *unaff_x27;
  byte *pbVar20;
  char *unaff_x28;
  long unaff_x29;
  byte *in_stack_00000008;
  long in_stack_00000010;
  byte *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  
  while ((0xfffffff5 < unaff_w26 - 0x3a || (0xfffffff9 < (unaff_w26 & 0xffffffdf) - 0x47))) {
    unaff_x22 = unaff_x22 + -1;
    pbVar20 = unaff_x27 + 1;
    unaff_x27 = unaff_x21;
    if (unaff_x22 == 0) break;
    unaff_w26 = (uint)*pbVar20;
    unaff_x27 = pbVar20;
    if (((*unaff_x19 & 1) == 0) && (iVar3 = __cxa_guard_acquire(), iVar3 != 0)) {
      p_Var6 = newlocale(0x1fbf,unaff_x28,(__locale_t)0x0);
      *unaff_x23 = p_Var6;
      __cxa_guard_release(unaff_x23 + 1);
    }
  }
  uVar18 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
  if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
    uVar18 = *(ulong *)(unaff_x29 + -0x20);
  }
  if (uVar18 == 0) {
    (**(code **)(*unaff_x25 + 0x60))();
    *unaff_x20 = *unaff_x20 + ((long)unaff_x27 - (long)unaff_x24) * 4;
  }
  else {
    if ((unaff_x24 != unaff_x27) &&
       (pbVar7 = unaff_x27 + -1, pbVar20 = unaff_x24, unaff_x24 < pbVar7)) {
      do {
        pbVar12 = pbVar20 + 1;
        bVar2 = *pbVar20;
        *pbVar20 = *pbVar7;
        pbVar8 = pbVar7 + -1;
        *pbVar7 = bVar2;
        pbVar7 = pbVar8;
        pbVar20 = pbVar12;
      } while (pbVar12 < pbVar8);
    }
    uVar4 = (**(code **)(*in_stack_00000028 + 0x20))(in_stack_00000028);
    if (unaff_x24 < unaff_x27) {
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = unaff_x29 - 0x28U | 1;
      lVar19 = (long)unaff_x27 - (long)unaff_x24;
      do {
        uVar9 = (ulong)uVar16;
        uVar1 = uVar18;
        if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
          uVar1 = *(ulong *)(unaff_x29 + -0x18);
        }
        if (*(char *)(uVar1 + uVar9) != '\0') {
          uVar1 = uVar18;
          if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
            uVar1 = *(ulong *)(unaff_x29 + -0x18);
          }
          if (uVar17 == *(byte *)(uVar1 + uVar9)) {
            puVar13 = (undefined4 *)*unaff_x20;
            uVar17 = 0;
            *puVar13 = uVar4;
            bVar2 = *(byte *)(unaff_x29 + -0x28);
            uVar15 = *(ulong *)(unaff_x29 + -0x20);
            *unaff_x20 = (long)(puVar13 + 1);
            uVar1 = (ulong)(bVar2 >> 1);
            if ((bVar2 & 1) != 0) {
              uVar1 = uVar15;
            }
            if (uVar9 < uVar1 - 1) {
              uVar16 = uVar16 + 1;
            }
          }
        }
        uVar5 = (**(code **)(*unaff_x25 + 0x58))();
        puVar13 = (undefined4 *)*unaff_x20;
        lVar19 = lVar19 + -1;
        uVar17 = uVar17 + 1;
        *puVar13 = uVar5;
        *unaff_x20 = (long)(puVar13 + 1);
      } while (lVar19 != 0);
      puVar13 = puVar13 + 1;
      puVar10 = (undefined4 *)(in_stack_00000010 + ((long)unaff_x24 - in_stack_00000030) * 4);
      if (puVar10 == puVar13) goto joined_r0x02fb3f04;
    }
    else {
      puVar13 = (undefined4 *)*unaff_x20;
      puVar10 = (undefined4 *)(in_stack_00000010 + ((long)unaff_x24 - in_stack_00000030) * 4);
      if (puVar10 == puVar13) goto joined_r0x02fb3f04;
    }
    if (puVar10 < puVar13 + -1) {
      puVar10 = puVar13 + -1;
      puVar13 = (undefined4 *)(in_stack_00000010 + in_stack_00000030 * -4 + (long)unaff_x24 * 4);
      do {
        puVar14 = puVar13 + 1;
        uVar4 = *puVar13;
        *puVar13 = *puVar10;
        puVar11 = puVar10 + -1;
        *puVar10 = uVar4;
        puVar10 = puVar11;
        puVar13 = puVar14;
      } while (puVar14 < puVar11);
    }
  }
joined_r0x02fb3f04:
  if (unaff_x27 < in_stack_00000008) {
    lVar19 = (long)in_stack_00000008 - (long)unaff_x27;
    pbVar20 = unaff_x27;
    do {
      if (*pbVar20 == 0x2e) {
        uVar4 = (**(code **)(*in_stack_00000028 + 0x18))(in_stack_00000028);
        puVar13 = (undefined4 *)*unaff_x20;
        *puVar13 = uVar4;
        *unaff_x20 = (long)(puVar13 + 1);
        unaff_x27 = pbVar20 + 1;
        break;
      }
      uVar4 = (**(code **)(*unaff_x25 + 0x58))();
      puVar13 = (undefined4 *)*unaff_x20;
      lVar19 = lVar19 + -1;
      *puVar13 = uVar4;
      *unaff_x20 = (long)(puVar13 + 1);
      unaff_x27 = in_stack_00000008;
      pbVar20 = pbVar20 + 1;
    } while (lVar19 != 0);
  }
  (**(code **)(*unaff_x25 + 0x60))();
  lVar19 = *unaff_x20 + ((long)in_stack_00000008 - (long)unaff_x27) * 4;
  bVar2 = *(byte *)(unaff_x29 + -0x28);
  *unaff_x20 = lVar19;
  if (in_stack_00000018 != in_stack_00000008) {
    lVar19 = in_stack_00000010 + ((long)in_stack_00000018 - in_stack_00000030) * 4;
  }
  *in_stack_00000020 = lVar19;
  if ((bVar2 & 1) != 0) {
    operator_delete(*(void **)(unaff_x29 + -0x18));
  }
  return;
}


