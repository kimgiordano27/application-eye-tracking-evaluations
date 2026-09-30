/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$Update
ENTRY_POINT: 0637ce50
PROGRAM: Waifu-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__Update
               (long param_1,ulong param_2,int param_3,ulong param_4,int param_5,int param_6,
               undefined8 param_7,long param_8)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  uint uVar6;
  undefined1 in_ZR;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
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
  ulong uVar13;
  int iVar14;
  uint in_stack_00000048;
  int in_stack_00000050;
  undefined8 in_stack_000000a8;
  int in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  do {
    *(undefined8 *)(param_8 + (long)param_5 * 8) = param_7;
    param_5 = param_5 + 1;
    if ((bool)in_ZR) {
LAB_0637ce94:
      do {
        do {
          in_x9 = in_x9 + 1;
          if (in_stack_000000b0 <= in_x9) {
            in_stack_00000048 = in_stack_00000048 & (*unaff_x19 ^ 0xffffffff);
            memmove((void *)(*(long *)(unaff_x19 + 2) + param_1 * 0x88),&stack0x00000048,0x88);
            return;
          }
          lVar9 = 0;
          uVar11 = 0x10000;
          iVar12 = (int)in_x9;
          uVar1 = in_stack_000000a8._4_4_ + iVar12;
          uVar7 = (uint)*(ushort *)
                         (*(long *)(unaff_x19 + 0x42) +
                         (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2));
          lVar8 = (long)(int)uVar1;
          do {
            if (((in_stack_00000048 >> (ulong)((uint)lVar9 & 0x1f)) >> 0x1c & 1) != 0) {
              uVar1 = *(uint *)(*(long *)(unaff_x19 + 0x12) +
                               (long)(*(int *)(in_x12 + lVar9 * 4) + iVar12) * 4);
              uVar6 = uVar1 >> 0x1c;
              if (uVar6 == 0) {
                uVar13 = 0;
              }
              else {
                uVar13 = 0;
                iVar14 = 0;
                do {
                  iVar2 = *(int *)(*(long *)(unaff_x19 + 0x16) +
                                   (long)(int)(*(int *)(in_x13 + lVar9 * 4) + (uVar1 & 0xfffffff) +
                                              (int)uVar13) * (long)param_3 + 0x24) +
                          *(int *)(in_x17 + lVar9 * 4);
                  if ((*(char *)(*(long *)(unaff_x19 + 10) + (long)iVar2) == '\0') ||
                     ((*(char *)(*(long *)(unaff_x19 + 0xe) + (long)iVar2) != '\0' &&
                      (iVar14 = iVar14 + 1,
                      (int)(uint)((ulong)(uVar6 * in_w10) * (ulong)in_w11 >> 0x25) < iVar14))))
                  goto LAB_0637cd6c;
                  uVar13 = uVar13 + 1;
                } while (uVar6 != uVar13);
                uVar13 = (ulong)uVar6;
              }
LAB_0637cd6c:
              uVar1 = uVar11;
              if (uVar6 != (uint)uVar13) {
                uVar1 = 0;
              }
              uVar7 = uVar1 | uVar7;
            }
            lVar9 = lVar9 + 1;
            uVar11 = uVar11 << 1;
          } while (lVar9 != 4);
          *(uint *)(*(long *)(unaff_x19 + 0x42) + lVar8 * 4) = uVar7;
          if (uVar7 >> 0x10 == 0) {
            uVar1 = in_stack_00000050 + iVar12;
            lVar9 = (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1) +
                    (long)(int)uVar1;
            puVar3 = (undefined8 *)(*(long *)(unaff_x19 + 0x1a) + lVar9 * 4);
            uVar10 = *puVar3;
            puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x32) + lVar8 * 0xc);
            *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
            *puVar4 = uVar10;
            puVar3 = (undefined8 *)(*(long *)(unaff_x19 + 0x1e) + lVar9 * 4);
            uVar10 = *puVar3;
            puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x36) + lVar8 * 0xc);
            *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
            *puVar4 = uVar10;
            puVar3 = (undefined8 *)(*(long *)(unaff_x19 + 0x22) + (long)(int)uVar1 * 0x10);
            uVar10 = *puVar3;
            puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x3a) + lVar8 * 0x10);
            puVar4[1] = puVar3[1];
            *puVar4 = uVar10;
          }
        } while ((in_w16 >> 2 & 1) == 0);
        param_6 = *(int *)(*(long *)(unaff_x19 + 0x2a) + (long)(in_w14 + iVar12) * 4);
        bVar5 = *(byte *)(*(long *)(unaff_x19 + 0x26) + (long)(in_w14 + iVar12));
        param_4 = (ulong)bVar5;
        if (0xffff < uVar7) {
          if (bVar5 != 0) {
            iVar12 = param_6 + in_stack_000000b8._4_4_;
            uVar1 = in_w15 + param_6;
            do {
              uVar13 = (ulong)uVar1;
              uVar11 = uVar1 >> 0x1f;
              param_4 = param_4 - 1;
              uVar1 = uVar1 + 1;
              *(ulong *)(*(long *)(unaff_x19 + 0x3e) + (long)iVar12 * 8) =
                   *(uint *)(*(long *)(unaff_x19 + 0x2e) +
                            (-(ulong)uVar11 & 0xfffffff800000000 | uVar13 << 3)) | param_2;
              iVar12 = iVar12 + 1;
            } while (param_4 != 0);
          }
          goto LAB_0637ce94;
        }
      } while (bVar5 == 0);
      param_5 = in_stack_000000b8._4_4_ + param_6;
      param_6 = param_6 + in_w15;
    }
    param_8 = *(long *)(unaff_x19 + 0x3e);
    param_4 = param_4 - 1;
    in_ZR = param_4 == 0;
    param_7 = *(undefined8 *)(*(long *)(unaff_x19 + 0x2e) + (long)param_6 * 8);
    param_6 = param_6 + 1;
  } while( true );
}


