/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$.ctor
ENTRY_POINT: 0637ccd0
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer___ctor
               (long param_1,ulong param_2,int param_3,uint param_4,uint param_5,ulong param_6,
               long param_7,long param_8,uint param_9)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  long in_x9;
  int in_w10;
  uint in_w11;
  long in_x12;
  long in_x13;
  int in_w14;
  int in_w15;
  uint in_w16;
  long in_x17;
  uint *unaff_x19;
  ulong uVar12;
  int iVar13;
  uint in_stack_00000048;
  int in_stack_00000050;
  undefined8 in_stack_000000a8;
  int in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  do {
    lVar8 = (long)(int)param_6;
    do {
      iVar11 = (int)in_x9;
      if (((param_4 >> (ulong)((uint)param_7 & 0x1f)) >> 0x1c & 1) != 0) {
        uVar5 = *(uint *)(*(long *)(unaff_x19 + 0x12) +
                         (long)(*(int *)(in_x12 + param_7 * 4) + iVar11) * 4);
        uVar7 = uVar5 >> 0x1c;
        if (uVar7 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          iVar13 = 0;
          do {
            iVar2 = *(int *)(*(long *)(unaff_x19 + 0x16) +
                             (long)(int)(*(int *)(in_x13 + param_7 * 4) + (uVar5 & 0xfffffff) +
                                        (int)uVar12) * (long)param_3 + 0x24) +
                    *(int *)(in_x17 + param_7 * 4);
            if ((*(char *)(*(long *)(unaff_x19 + 10) + (long)iVar2) == '\0') ||
               ((*(char *)(*(long *)(unaff_x19 + 0xe) + (long)iVar2) != '\0' &&
                (iVar13 = iVar13 + 1,
                (int)(uint)((ulong)(uVar7 * in_w10) * (ulong)in_w11 >> 0x25) < iVar13))))
            goto LAB_0637cd6c;
            uVar12 = uVar12 + 1;
          } while (uVar7 != uVar12);
          uVar12 = (ulong)uVar7;
        }
LAB_0637cd6c:
        uVar5 = param_9;
        if (uVar7 != (uint)uVar12) {
          uVar5 = 0;
        }
        param_5 = uVar5 | param_5;
      }
      param_7 = param_7 + 1;
      param_9 = param_9 << 1;
    } while (param_7 != 4);
    *(uint *)(param_8 + lVar8 * 4) = param_5;
    if (param_5 >> 0x10 == 0) {
      uVar5 = in_stack_00000050 + iVar11;
      lVar1 = (-(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1) + (long)(int)uVar5;
      puVar3 = (undefined8 *)(*(long *)(unaff_x19 + 0x1a) + lVar1 * 4);
      uVar10 = *puVar3;
      puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x32) + lVar8 * 0xc);
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
      *puVar4 = uVar10;
      puVar3 = (undefined8 *)(*(long *)(unaff_x19 + 0x1e) + lVar1 * 4);
      uVar10 = *puVar3;
      puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x36) + lVar8 * 0xc);
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
      *puVar4 = uVar10;
      puVar3 = (undefined8 *)(*(long *)(unaff_x19 + 0x22) + (long)(int)uVar5 * 0x10);
      uVar10 = *puVar3;
      puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x3a) + lVar8 * 0x10);
      puVar4[1] = puVar3[1];
      *puVar4 = uVar10;
    }
    if ((in_w16 >> 2 & 1) != 0) {
      iVar13 = *(int *)(*(long *)(unaff_x19 + 0x2a) + (long)(in_w14 + iVar11) * 4);
      bVar6 = *(byte *)(*(long *)(unaff_x19 + 0x26) + (long)(in_w14 + iVar11));
      uVar12 = (ulong)bVar6;
      if (param_5 < 0x10000) {
        if (bVar6 != 0) {
          iVar11 = in_stack_000000b8._4_4_ + iVar13;
          iVar13 = iVar13 + in_w15;
          do {
            uVar12 = uVar12 - 1;
            lVar8 = (long)iVar13;
            iVar13 = iVar13 + 1;
            *(undefined8 *)(*(long *)(unaff_x19 + 0x3e) + (long)iVar11 * 8) =
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x2e) + lVar8 * 8);
            iVar11 = iVar11 + 1;
          } while (uVar12 != 0);
        }
      }
      else if (bVar6 != 0) {
        iVar11 = iVar13 + in_stack_000000b8._4_4_;
        uVar5 = in_w15 + iVar13;
        do {
          uVar9 = (ulong)uVar5;
          uVar7 = uVar5 >> 0x1f;
          uVar12 = uVar12 - 1;
          uVar5 = uVar5 + 1;
          *(ulong *)(*(long *)(unaff_x19 + 0x3e) + (long)iVar11 * 8) =
               *(uint *)(*(long *)(unaff_x19 + 0x2e) +
                        (-(ulong)uVar7 & 0xfffffff800000000 | uVar9 << 3)) | param_2;
          iVar11 = iVar11 + 1;
        } while (uVar12 != 0);
      }
    }
    in_x9 = in_x9 + 1;
    if (in_stack_000000b0 <= in_x9) {
      in_stack_00000048 = in_stack_00000048 & (*unaff_x19 ^ 0xffffffff);
      memmove((void *)(*(long *)(unaff_x19 + 2) + param_1 * 0x88),&stack0x00000048,0x88);
      return;
    }
    param_8 = *(long *)(unaff_x19 + 0x42);
    param_7 = 0;
    param_9 = 0x10000;
    uVar5 = in_stack_000000a8._4_4_ + (int)in_x9;
    param_6 = (ulong)uVar5;
    param_5 = (uint)*(ushort *)
                     (param_8 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | param_6 << 2));
    param_4 = in_stack_00000048;
  } while( true );
}


