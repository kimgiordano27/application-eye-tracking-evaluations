/*
FUNCTION_NAME: Amazon.Util.AWSHttpClient$$Dispose
ENTRY_POINT: 04a24f34
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Amazon_Util_AWSHttpClient__Dispose(int param_1,char *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  __locale_t p_Var5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  byte *unaff_x19;
  ulong *unaff_x20;
  byte *unaff_x21;
  uint uVar12;
  long unaff_x22;
  uint uVar13;
  undefined8 *unaff_x23;
  byte *unaff_x24;
  ulong uVar14;
  long *unaff_x25;
  uint unaff_w26;
  long lVar15;
  byte *unaff_x27;
  byte *pbVar16;
  ulong *unaff_x28;
  long unaff_x29;
  byte *in_stack_00000010;
  long *in_stack_00000018;
  byte *in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  
code_r0x04a24f34:
  pbVar16 = unaff_x27;
  if (param_1 != 0) {
    p_Var5 = newlocale(0x1fbf,param_2 + 0xee0,(__locale_t)0x0);
    *unaff_x23 = p_Var5;
    Amazon_Runtime_RefreshingAWSCredentials__GenerateNewCredentialsAsync(unaff_x23 + 1);
  }
  while ((0xfffffff5 < unaff_w26 - 0x3a || (0xfffffff9 < (unaff_w26 & 0xffffffdf) - 0x47))) {
    unaff_x22 = unaff_x22 + -1;
    unaff_x27 = pbVar16 + 1;
    pbVar16 = unaff_x21;
    if (unaff_x22 == 0) break;
    unaff_w26 = (uint)*unaff_x27;
    pbVar16 = unaff_x27;
    if ((*unaff_x19 & 1) == 0) goto LAB_04a24f28;
  }
  uVar14 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
  if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
    uVar14 = *(ulong *)(unaff_x29 + -0x20);
  }
  if (uVar14 == 0) {
    (**(code **)(*unaff_x25 + 0x40))();
    *unaff_x20 = (ulong)(pbVar16 + (*unaff_x20 - (long)unaff_x24));
    if (in_stack_00000020 <= pbVar16) goto LAB_04a2524c;
    goto LAB_04a251e0;
  }
  if ((unaff_x24 != pbVar16) && (pbVar6 = pbVar16 + -1, pbVar9 = unaff_x24, unaff_x24 < pbVar6)) {
    do {
      pbVar10 = pbVar9 + 1;
      bVar2 = *pbVar9;
      *pbVar9 = *pbVar6;
      pbVar7 = pbVar6 + -1;
      *pbVar6 = bVar2;
      pbVar6 = pbVar7;
      pbVar9 = pbVar10;
    } while (pbVar10 < pbVar7);
  }
  uVar3 = (**(code **)(*in_stack_00000018 + 0x20))(in_stack_00000018);
  if (unaff_x24 < pbVar16) {
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = unaff_x29 - 0x28U | 1;
    lVar15 = (long)pbVar16 - (long)unaff_x24;
    do {
      uVar8 = (ulong)uVar12;
      uVar1 = uVar14;
      if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
        uVar1 = *(ulong *)(unaff_x29 + -0x18);
      }
      if (*(char *)(uVar1 + uVar8) != '\0') {
        uVar1 = uVar14;
        if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
          uVar1 = *(ulong *)(unaff_x29 + -0x18);
        }
        if (uVar13 == *(byte *)(uVar1 + uVar8)) {
          puVar11 = (undefined1 *)*unaff_x20;
          uVar13 = 0;
          *unaff_x20 = (ulong)(puVar11 + 1);
          *puVar11 = uVar3;
          uVar1 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
          if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
            uVar1 = *(ulong *)(unaff_x29 + -0x20);
          }
          if (uVar8 < uVar1 - 1) {
            uVar12 = uVar12 + 1;
          }
        }
      }
      uVar4 = (**(code **)(*unaff_x25 + 0x38))();
      puVar11 = (undefined1 *)*unaff_x20;
      lVar15 = lVar15 + -1;
      uVar13 = uVar13 + 1;
      *unaff_x20 = (ulong)(puVar11 + 1);
      *puVar11 = uVar4;
    } while (lVar15 != 0);
  }
  if ((unaff_x24 + (in_stack_00000028 - in_stack_00000030) != (byte *)*unaff_x20) &&
     (pbVar9 = (byte *)*unaff_x20 + -1, unaff_x24 + (in_stack_00000028 - in_stack_00000030) < pbVar9
     )) {
    pbVar6 = unaff_x24 + (in_stack_00000028 - in_stack_00000030);
    do {
      pbVar10 = pbVar6 + 1;
      bVar2 = *pbVar6;
      *pbVar6 = *pbVar9;
      pbVar7 = pbVar9 + -1;
      *pbVar9 = bVar2;
      pbVar9 = pbVar7;
      pbVar6 = pbVar10;
    } while (pbVar10 < pbVar7);
  }
  if (pbVar16 < in_stack_00000020) {
LAB_04a251e0:
    lVar15 = (long)in_stack_00000020 - (long)pbVar16;
    pbVar9 = pbVar16;
    do {
      if (*pbVar9 == 0x2e) {
        uVar3 = (**(code **)(*in_stack_00000018 + 0x18))(in_stack_00000018);
        puVar11 = (undefined1 *)*unaff_x20;
        *unaff_x20 = (ulong)(puVar11 + 1);
        *puVar11 = uVar3;
        pbVar16 = pbVar9 + 1;
        break;
      }
      uVar3 = (**(code **)(*unaff_x25 + 0x38))();
      puVar11 = (undefined1 *)*unaff_x20;
      lVar15 = lVar15 + -1;
      *unaff_x20 = (ulong)(puVar11 + 1);
      *puVar11 = uVar3;
      pbVar16 = in_stack_00000020;
      pbVar9 = pbVar9 + 1;
    } while (lVar15 != 0);
  }
LAB_04a2524c:
  (**(code **)(*unaff_x25 + 0x40))();
  uVar14 = *unaff_x20;
  bVar2 = *(byte *)(unaff_x29 + -0x28);
  *unaff_x20 = (ulong)(in_stack_00000020 + (uVar14 - (long)pbVar16));
  pbVar16 = in_stack_00000020 + (uVar14 - (long)pbVar16);
  if (in_stack_00000010 != in_stack_00000020) {
    pbVar16 = in_stack_00000010 + (in_stack_00000028 - in_stack_00000030);
  }
  *unaff_x28 = (ulong)pbVar16;
  if ((bVar2 & 1) != 0) {
    operator_delete(*(void **)(unaff_x29 + -0x18));
  }
  return;
LAB_04a24f28:
  param_1 = __cxa_guard_acquire();
  param_2 = "Impl_Injected(System.IntPtr,System.Int32,System.Object)";
  goto code_r0x04a24f34;
}


