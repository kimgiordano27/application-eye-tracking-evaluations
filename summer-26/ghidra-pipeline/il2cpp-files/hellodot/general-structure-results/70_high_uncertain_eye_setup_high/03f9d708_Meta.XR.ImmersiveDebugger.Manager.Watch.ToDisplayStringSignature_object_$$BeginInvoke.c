/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<object>$$BeginInvoke
ENTRY_POINT: 03f9d708
PROGRAM: hellodot-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03f9dac8) */

void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<object>__BeginInvoke
               (long param_1,undefined8 param_2,undefined8 param_3,size_t param_4)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong in_x9;
  long lVar8;
  long in_x10;
  ulong uVar9;
  undefined8 *puVar10;
  long unaff_x19;
  void *__dest;
  void *__s;
  long unaff_x22;
  size_t unaff_x23;
  ulong __n;
  ulong uVar11;
  void *__s_00;
  undefined8 *__dest_00;
  long unaff_x27;
  void *pvVar12;
  void *__src;
  long unaff_x29;
  
  lVar8 = in_x10 - (in_x9 & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x38) = lVar8;
  __n = (ulong)*(uint *)(*(long *)(param_1 + 0x80) + 0xfc);
  uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0x90) + 0xfc);
  __dest_00 = (undefined8 *)(lVar8 - (__n + 0xf & 0x1fffffff0));
  lVar8 = (long)__dest_00 - (uVar9 + 0xf & 0x1fffffff0);
  *(ulong *)(unaff_x29 + -0x30) = uVar9;
  *(long *)(unaff_x29 + -0x28) = lVar8;
  uVar9 = param_4 + 0xf & 0x1fffffff0;
  lVar8 = lVar8 - uVar9;
  *(long *)(unaff_x29 + -0x48) = lVar8;
  *(size_t *)(unaff_x29 + -0x40) = param_4;
  uVar11 = unaff_x23 + 0xf & 0x1fffffff0;
  __src = (void *)(lVar8 - uVar11);
  __dest = (void *)((long)__src - uVar11);
  __s = (void *)((long)__dest - uVar9);
  memset(__s,0,param_4);
  __s_00 = (void *)((long)__s - uVar11);
  memset(__s_00,0,unaff_x23);
  if (unaff_x22 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(unaff_x27 + 0xc0) + 0xb0))();
    lVar8 = *(long *)(unaff_x22 + 0x50);
    if (lVar8 != 0) {
      pvVar12 = *(void **)(unaff_x29 + -0x48);
      puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb8);
      uVar2 = *puVar5;
      *(void **)(unaff_x29 + -0x20) = pvVar12;
      (*(code *)puVar5[2])(uVar2,puVar5,lVar8,unaff_x29 + -0x20,pvVar12);
      memcpy(__s,pvVar12,*(size_t *)(unaff_x29 + -0x40));
      while (uVar9 = (*(code *)**(undefined8 **)
                                 (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8))(__s),
            (uVar9 & 1) != 0) {
        puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 200);
        uVar2 = *puVar5;
        *(void **)(unaff_x29 + -0x20) = __src;
        (*(code *)puVar5[2])(uVar2,puVar5,__s,unaff_x29 + -0x20,__src);
        memcpy(__s_00,__src,unaff_x23);
        memcpy(__dest,__s_00,unaff_x23);
        pvVar12 = (void *)thunk_FUN_02cd0998(__dest,*(undefined8 *)
                                                     (*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20
                                                                                   ) + 0xc0) + 0x68)
                                                     + 0x80));
        memcpy(__dest_00,pvVar12,__n);
        lVar8 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        puVar5 = __dest_00;
        if (-1 < *(int *)(*(long *)(lVar8 + 0x80) + 0x28)) {
          puVar5 = (undefined8 *)*__dest_00;
        }
        puVar6 = *(undefined8 **)(lVar8 + 0xd8);
        uVar2 = *puVar6;
        *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
        (*(code *)puVar6[2])(uVar2);
        cVar1 = *(char *)(unaff_x29 + -0xc);
        memcpy(__src,__s_00,unaff_x23);
        uVar2 = *(undefined8 *)
                 (*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68) + 0x80);
        if (cVar1 == '\0') {
          pvVar12 = (void *)thunk_FUN_02cd0998(__src,uVar2);
          memcpy(__dest_00,pvVar12,__n);
          memcpy(__dest,__s_00,unaff_x23);
          pvVar12 = (void *)thunk_FUN_02cd0998(__dest,*(long *)(*(long *)(*(long *)(*(long *)(
                                                  unaff_x19 + 0x20) + 0xc0) + 0x68) + 0x80) + 0x20);
          memcpy(*(void **)(unaff_x29 + -0x28),pvVar12,*(size_t *)(unaff_x29 + -0x30));
          lVar8 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
          puVar5 = __dest_00;
          if (-1 < *(int *)(*(long *)(lVar8 + 0x80) + 0x28)) {
            puVar5 = (undefined8 *)*__dest_00;
          }
          puVar6 = *(undefined8 **)(lVar8 + 0xe0);
          puVar10 = *(undefined8 **)(unaff_x29 + -0x28);
          uVar2 = *puVar6;
          if (-1 < *(int *)(*(long *)(lVar8 + 0x90) + 0x28)) {
            puVar10 = (undefined8 *)*puVar10;
          }
          *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
          (*(code *)puVar6[2])(uVar2);
        }
        else {
          pvVar12 = (void *)thunk_FUN_02cd0998(__src,uVar2);
          memcpy(__dest_00,pvVar12,__n);
          uVar2 = thunk_FUN_02cea4e8(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80),
                                     __dest_00);
          plVar3 = (long *)AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime();
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
          uVar2 = FUN_04db9af8(*(undefined8 *)PTR_DAT_065dff20,uVar2,uVar4,
                               *(undefined8 *)PTR_DAT_065dff28,0);
          if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_05eb364c(uVar2,0);
        }
      }
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      lVar8 = *(long *)(lVar7 + 0xc0);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02ce0978();
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      }
      FUN_02ce855c(lVar8,*(undefined8 *)(lVar7 + 0xf0),*(undefined8 *)(unaff_x29 + -0x38),__s,0,0);
      if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


