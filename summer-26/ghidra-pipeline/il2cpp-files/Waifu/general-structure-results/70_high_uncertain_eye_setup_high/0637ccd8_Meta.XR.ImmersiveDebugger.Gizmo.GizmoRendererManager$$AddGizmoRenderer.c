/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$AddGizmoRenderer
ENTRY_POINT: 0637ccd8
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__AddGizmoRenderer
               (long param_1,ulong param_2,int param_3,uint param_4,uint param_5,long param_6,
               long param_7,long param_8,uint param_9)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
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
  uint unaff_w20;
  ulong uVar11;
  int iVar12;
  uint in_stack_00000048;
  int in_stack_00000050;
  undefined8 in_stack_000000a8;
  int in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  do {
    iVar10 = (int)in_x9;
    if ((unaff_w20 >> 0x1c & 1) != 0) {
      uVar5 = *(uint *)(*(long *)(unaff_x19 + 0x12) +
                       (long)(*(int *)(in_x12 + param_7 * 4) + iVar10) * 4);
      uVar7 = uVar5 >> 0x1c;
      if (uVar7 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        iVar12 = 0;
                    /* try { // try from 0637cd18 to 0647cd1f has its CatchHandler @ 0637cd84 */
        do {
          iVar2 = *(int *)(*(long *)(unaff_x19 + 0x16) +
                           (long)(int)(*(int *)(in_x13 + param_7 * 4) + (uVar5 & 0xfffffff) +
                                      (int)uVar11) * (long)param_3 + 0x24) +
                  *(int *)(in_x17 + param_7 * 4);
                    /* try { // try from 0637cd34 to 0647cd37 has its CatchHandler @ 0637cd74 */
                    /* try { // try from 0637cd38 to 0647cd43 has its CatchHandler @ 0637cd80 */
                    /* try { // try from 0637cd4c to 0647cd67 has its CatchHandler @ 0637cd78 */
          if ((*(char *)(*(long *)(unaff_x19 + 10) + (long)iVar2) == '\0') ||
             ((*(char *)(*(long *)(unaff_x19 + 0xe) + (long)iVar2) != '\0' &&
              (iVar12 = iVar12 + 1,
              (int)(uint)((ulong)(uVar7 * in_w10) * (ulong)in_w11 >> 0x25) < iVar12))))
          goto LAB_0637cd6c;
          uVar11 = uVar11 + 1;
        } while (uVar7 != uVar11);
        uVar11 = (ulong)uVar7;
      }
LAB_0637cd6c:
                    /* try { // try from 0637cd6c to 0647cd6f has its CatchHandler @ 0637cd7c */
      uVar5 = param_9;
                    /* try { // try from 0637cd70 to 0647cd93 has its CatchHandler @ 0637cc1c */
      if (uVar7 != (uint)uVar11) {
        uVar5 = 0;
      }
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0637cd34 with catch @ 0637cd74
                        */
      param_5 = uVar5 | param_5;
    }
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0637cd4c with catch @ 0637cd78
                        */
    param_7 = param_7 + 1;
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0637cd6c with catch @ 0637cd7c
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0637cd38 with catch @ 0637cd80
                        */
    param_9 = param_9 << 1;
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0637cd18 with catch @ 0637cd84
                        */
    if (param_7 == 4) {
      *(uint *)(param_8 + param_6 * 4) = param_5;
      if (param_5 >> 0x10 == 0) {
                    /* try { // try from 0637cd94 to 0647cd97 has its CatchHandler @ 0637cdc8 */
                    /* try { // try from 0637cd98 to 0647cdcf has its CatchHandler @ 0637cc1c */
        uVar5 = in_stack_00000050 + iVar10;
        lVar1 = (-(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1) +
                (long)(int)uVar5;
        puVar3 = (undefined8 *)(*(long *)(unaff_x19 + 0x1a) + lVar1 * 4);
        uVar9 = *puVar3;
        puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x32) + param_6 * 0xc);
                    /* catch() { ... } // from try @ 0637cd94 with catch @ 0637cdc8 */
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
        *puVar4 = uVar9;
                    /* try { // try from 0637cdd0 to 0647cdd7 has its CatchHandler @ 0637cdd8 */
        puVar3 = (undefined8 *)(*(long *)(unaff_x19 + 0x1e) + lVar1 * 4);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0637cdd0 with catch @ 0637cdd8
                        */
        uVar9 = *puVar3;
        puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x36) + param_6 * 0xc);
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
        *puVar4 = uVar9;
        puVar3 = (undefined8 *)(*(long *)(unaff_x19 + 0x22) + (long)(int)uVar5 * 0x10);
        uVar9 = *puVar3;
        puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x3a) + param_6 * 0x10);
        puVar4[1] = puVar3[1];
        *puVar4 = uVar9;
      }
      if ((in_w16 >> 2 & 1) != 0) {
        iVar12 = *(int *)(*(long *)(unaff_x19 + 0x2a) + (long)(in_w14 + iVar10) * 4);
        bVar6 = *(byte *)(*(long *)(unaff_x19 + 0x26) + (long)(in_w14 + iVar10));
        uVar11 = (ulong)bVar6;
        if (param_5 < 0x10000) {
          if (bVar6 != 0) {
            iVar10 = in_stack_000000b8._4_4_ + iVar12;
            iVar12 = iVar12 + in_w15;
            do {
              uVar11 = uVar11 - 1;
              lVar1 = (long)iVar12;
              iVar12 = iVar12 + 1;
              *(undefined8 *)(*(long *)(unaff_x19 + 0x3e) + (long)iVar10 * 8) =
                   *(undefined8 *)(*(long *)(unaff_x19 + 0x2e) + lVar1 * 8);
              iVar10 = iVar10 + 1;
            } while (uVar11 != 0);
          }
        }
        else if (bVar6 != 0) {
          iVar10 = iVar12 + in_stack_000000b8._4_4_;
          uVar5 = in_w15 + iVar12;
          do {
            uVar8 = (ulong)uVar5;
            uVar7 = uVar5 >> 0x1f;
            uVar11 = uVar11 - 1;
            uVar5 = uVar5 + 1;
            *(ulong *)(*(long *)(unaff_x19 + 0x3e) + (long)iVar10 * 8) =
                 *(uint *)(*(long *)(unaff_x19 + 0x2e) +
                          (-(ulong)uVar7 & 0xfffffff800000000 | uVar8 << 3)) | param_2;
            iVar10 = iVar10 + 1;
          } while (uVar11 != 0);
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
      param_5 = (uint)*(ushort *)
                       (param_8 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2)
                       );
      param_6 = (long)(int)uVar5;
      param_4 = in_stack_00000048;
    }
    unaff_w20 = param_4 >> (ulong)((uint)param_7 & 0x1f);
  } while( true );
}


