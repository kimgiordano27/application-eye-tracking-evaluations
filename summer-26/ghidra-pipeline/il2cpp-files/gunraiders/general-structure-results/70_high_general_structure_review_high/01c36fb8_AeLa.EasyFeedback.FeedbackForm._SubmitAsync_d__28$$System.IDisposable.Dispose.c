/*
FUNCTION_NAME: AeLa.EasyFeedback.FeedbackForm.<SubmitAsync>d__28$$System.IDisposable.Dispose
ENTRY_POINT: 01c36fb8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void AeLa_EasyFeedback_FeedbackForm_<SubmitAsync>d__28__System_IDisposable_Dispose(void)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  void *__dest;
  int iVar8;
  undefined8 *unaff_x20;
  void *__src;
  size_t __n;
  ulong uVar9;
  
  FUN_01c72e20();
  FUN_01c62a1c();
  piVar1 = (int *)(DAT_04545648 + 0xa0);
  iVar8 = 0;
  do {
    iVar3 = *piVar1;
    if (iVar3 == iVar8) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_01c36ffc;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01c36ffc:
      bVar6 = false;
    }
    lVar7 = DAT_04545648;
    if ((iVar3 == 2) || (iVar8 = iVar3, bVar6)) {
      while (DAT_04545648 = lVar7, iVar3 != 0) {
        FUN_01c969f4(piVar1,2,0xffffffff);
        do {
          iVar3 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = 2;
            cVar5 = ExclusiveMonitorsStatus();
          }
          lVar7 = DAT_04545648;
        } while (cVar5 != '\0');
      }
      puVar4 = *(undefined8 **)(lVar7 + 0x78);
      if (puVar4 == *(undefined8 **)(lVar7 + 0x80)) {
        __src = *(void **)(lVar7 + 0x70);
        __n = (long)puVar4 - (long)__src;
        uVar9 = (long)__n >> 3;
        uVar2 = uVar9 + 1;
        if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar2 <= (ulong)((long)__n >> 2)) {
          uVar2 = (long)__n >> 2;
        }
        if (0xffffffffffffffe < uVar9) {
          uVar2 = 0x1fffffffffffffff;
        }
        if (uVar2 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01beb364("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          __dest = operator_new(uVar2 << 3);
        }
        puVar4 = (undefined8 *)((long)__dest + uVar9 * 8);
        *puVar4 = *unaff_x20;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        *(void **)(lVar7 + 0x70) = __dest;
        *(undefined8 **)(lVar7 + 0x78) = puVar4 + 1;
        *(void **)(lVar7 + 0x80) = (void *)((long)__dest + uVar2 * 8);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      else {
        *puVar4 = *unaff_x20;
        *(undefined8 **)(lVar7 + 0x78) = puVar4 + 1;
      }
      do {
        iVar8 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = 0;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 2) {
        FUN_01c96a4c(piVar1,1,0);
      }
      return;
    }
  } while( true );
}


