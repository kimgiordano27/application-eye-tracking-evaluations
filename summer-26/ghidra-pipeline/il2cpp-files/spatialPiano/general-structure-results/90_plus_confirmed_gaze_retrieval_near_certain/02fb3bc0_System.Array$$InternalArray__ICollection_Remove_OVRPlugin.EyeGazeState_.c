/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.EyeGazeState>
ENTRY_POINT: 02fb3bc0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_EyeGazeState>(void)

{
  ulong uVar1;
  byte bVar2;
  bool in_CY;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint uVar15;
  long unaff_x22;
  uint uVar16;
  long unaff_x23;
  byte *unaff_x24;
  ulong uVar17;
  long *unaff_x25;
  byte *unaff_x26;
  long lVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *unaff_x28;
  long unaff_x29;
  long in_stack_00000010;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  
  if (in_CY) {
    pbVar20 = unaff_x24;
    uVar17 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
    if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
      uVar17 = *(ulong *)(unaff_x29 + -0x20);
    }
  }
  else {
    pbVar19 = unaff_x24;
    do {
      pbVar20 = pbVar19;
      bVar2 = *pbVar20;
      if (((DAT_06de37f8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06de37f8), iVar3 != 0)) {
        DAT_06de37f0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_06de37f8);
      }
      if ((bVar2 - 0x3a < 0xfffffff6) && ((bVar2 & 0xffffffdf) - 0x47 < 0xfffffffa)) break;
      unaff_x22 = unaff_x22 + -1;
      pbVar19 = pbVar20 + 1;
      pbVar20 = (byte *)(unaff_x21 + unaff_x23);
    } while (unaff_x22 != 0);
    unaff_x19 = in_stack_00000028;
    uVar17 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
    if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
      uVar17 = *(ulong *)(unaff_x29 + -0x20);
    }
  }
  if (uVar17 == 0) {
    (**(code **)(*unaff_x25 + 0x60))();
    *unaff_x20 = *unaff_x20 + ((long)pbVar20 - (long)unaff_x24) * 4;
    in_stack_00000028 = unaff_x19;
  }
  else {
    if ((unaff_x24 != pbVar20) && (pbVar6 = pbVar20 + -1, pbVar19 = unaff_x24, unaff_x24 < pbVar6))
    {
      do {
        pbVar11 = pbVar19 + 1;
        bVar2 = *pbVar19;
        *pbVar19 = *pbVar6;
        pbVar7 = pbVar6 + -1;
        *pbVar6 = bVar2;
        pbVar6 = pbVar7;
        pbVar19 = pbVar11;
      } while (pbVar11 < pbVar7);
    }
    uVar4 = (**(code **)(*unaff_x19 + 0x20))(unaff_x19);
    if (unaff_x24 < pbVar20) {
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = unaff_x29 - 0x28U | 1;
      lVar18 = (long)pbVar20 - (long)unaff_x24;
      do {
        uVar8 = (ulong)uVar15;
        uVar1 = uVar17;
        if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
          uVar1 = *(ulong *)(unaff_x29 + -0x18);
        }
        if (*(char *)(uVar1 + uVar8) != '\0') {
          uVar1 = uVar17;
          if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
            uVar1 = *(ulong *)(unaff_x29 + -0x18);
          }
          if (uVar16 == *(byte *)(uVar1 + uVar8)) {
            puVar12 = (undefined4 *)*unaff_x20;
            uVar16 = 0;
            *puVar12 = uVar4;
            bVar2 = *(byte *)(unaff_x29 + -0x28);
            uVar14 = *(ulong *)(unaff_x29 + -0x20);
            *unaff_x20 = (long)(puVar12 + 1);
            uVar1 = (ulong)(bVar2 >> 1);
            if ((bVar2 & 1) != 0) {
              uVar1 = uVar14;
            }
            if (uVar8 < uVar1 - 1) {
              uVar15 = uVar15 + 1;
            }
          }
        }
        uVar5 = (**(code **)(*unaff_x25 + 0x58))();
        puVar12 = (undefined4 *)*unaff_x20;
        lVar18 = lVar18 + -1;
        uVar16 = uVar16 + 1;
        *puVar12 = uVar5;
        *unaff_x20 = (long)(puVar12 + 1);
      } while (lVar18 != 0);
      puVar12 = puVar12 + 1;
      puVar9 = (undefined4 *)(in_stack_00000010 + ((long)unaff_x24 - in_stack_00000030) * 4);
      if (puVar9 == puVar12) goto joined_r0x02fb3ea8;
    }
    else {
      puVar12 = (undefined4 *)*unaff_x20;
      puVar9 = (undefined4 *)(in_stack_00000010 + ((long)unaff_x24 - in_stack_00000030) * 4);
      if (puVar9 == puVar12) goto joined_r0x02fb3ea8;
    }
    if (puVar9 < puVar12 + -1) {
      puVar9 = puVar12 + -1;
      puVar12 = (undefined4 *)(in_stack_00000010 + in_stack_00000030 * -4 + (long)unaff_x24 * 4);
      do {
        puVar13 = puVar12 + 1;
        uVar4 = *puVar12;
        *puVar12 = *puVar9;
        puVar10 = puVar9 + -1;
        *puVar9 = uVar4;
        puVar9 = puVar10;
        puVar12 = puVar13;
      } while (puVar13 < puVar10);
    }
  }
joined_r0x02fb3ea8:
  if (pbVar20 < unaff_x26) {
    lVar18 = (long)unaff_x26 - (long)pbVar20;
    pbVar19 = pbVar20;
    do {
      if (*pbVar19 == 0x2e) {
        uVar4 = (**(code **)(*in_stack_00000028 + 0x18))(in_stack_00000028);
        puVar12 = (undefined4 *)*unaff_x20;
        *puVar12 = uVar4;
        *unaff_x20 = (long)(puVar12 + 1);
        pbVar20 = pbVar19 + 1;
        break;
      }
      uVar4 = (**(code **)(*unaff_x25 + 0x58))();
      puVar12 = (undefined4 *)*unaff_x20;
      lVar18 = lVar18 + -1;
      *puVar12 = uVar4;
      *unaff_x20 = (long)(puVar12 + 1);
      pbVar20 = unaff_x26;
      pbVar19 = pbVar19 + 1;
    } while (lVar18 != 0);
  }
  (**(code **)(*unaff_x25 + 0x60))();
  lVar18 = *unaff_x20 + ((long)unaff_x26 - (long)pbVar20) * 4;
  bVar2 = *(byte *)(unaff_x29 + -0x28);
  *unaff_x20 = lVar18;
  if (unaff_x28 != unaff_x26) {
    lVar18 = in_stack_00000010 + ((long)unaff_x28 - in_stack_00000030) * 4;
  }
  *in_stack_00000020 = lVar18;
  if ((bVar2 & 1) != 0) {
    operator_delete(*(void **)(unaff_x29 + -0x18));
  }
  return;
}


