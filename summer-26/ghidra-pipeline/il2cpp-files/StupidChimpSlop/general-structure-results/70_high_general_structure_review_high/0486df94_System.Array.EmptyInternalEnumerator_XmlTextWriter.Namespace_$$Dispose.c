/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlTextWriter.Namespace>$$Dispose
ENTRY_POINT: 0486df94
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>__Dispose(long *param_1)

{
  size_t __n;
  byte bVar1;
  ushort uVar2;
  long lVar3;
  int *piVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  long *unaff_x22;
  long unaff_x29;
  
  bVar1 = *(byte *)(*(long *)PTR_DAT_06647b18 + 0x130);
  if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06647b18)) {
    if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(param_1,*(undefined8 *)(unaff_x29 + -0xe0));
    }
  }
  else {
    lVar3 = FUN_04f2e80c(param_1,0);
    if (lVar3 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
    }
    else {
      FUN_04f2e8cc(lVar3,0);
      if ((*(ushort *)(*unaff_x22 + 0x135) & 1) == 0) {
        FUN_02d8720c();
      }
      piVar4 = (int *)thunk_FUN_02dac2f0();
      if (*piVar4 == 1) {
        if ((*(ushort *)(*unaff_x22 + 0x135) & 1) == 0) {
          FUN_02d8720c();
        }
      }
      else {
        if ((*(ushort *)(*unaff_x22 + 0x135) & 1) == 0) {
          FUN_02d8720c();
        }
        FUN_0291e530();
        if ((*(ushort *)(*unaff_x22 + 0x135) & 1) == 0) {
          FUN_02d8720c();
        }
        pvVar5 = (void *)thunk_FUN_02dac2f0();
        memset(pvVar5,0,*(size_t *)(unaff_x29 + -0x80));
        if ((*(ushort *)(*unaff_x22 + 0x135) & 1) == 0) {
          FUN_02d8720c();
        }
      }
      pvVar5 = (void *)thunk_FUN_02dac2f0();
      __n = *(size_t *)(unaff_x29 + -0x80);
      memcpy(*(void **)(unaff_x29 + -0x88),pvVar5,__n);
      memcpy(*(void **)(unaff_x29 + -0xd8),pvVar5,__n);
      if ((*(ushort *)(*unaff_x22 + 0x135) & 1) == 0) {
        FUN_02d8720c();
      }
      FUN_0291e7a8();
      if ((*(ushort *)(*unaff_x22 + 0x135) & 1) == 0) {
        FUN_02d8720c();
      }
      pvVar5 = (void *)thunk_FUN_02dac2f0();
      memset(pvVar5,0,*(size_t *)(unaff_x29 + -0x80));
      if ((*(ushort *)(*unaff_x22 + 0x135) & 1) == 0) {
        FUN_02d8720c();
      }
      FUN_0291e530();
      if ((*(ushort *)(*unaff_x22 + 0x135) & 1) == 0) {
        FUN_02d8720c();
      }
      FUN_0291e530();
      memcpy(*(void **)(unaff_x29 + -0x88),*(void **)(unaff_x29 + -0xd8),
             *(size_t *)(unaff_x29 + -0x80));
      lVar8 = *unaff_x22;
      uVar2 = *(ushort *)(lVar8 + 0x135);
      lVar3 = lVar8;
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02d8720c(lVar8);
        uVar2 = *(ushort *)(*unaff_x22 + 0x135);
        lVar3 = *unaff_x22;
      }
      uVar10 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0xe8);
      lVar8 = lVar3;
      if ((uVar2 & 1) == 0) {
        lVar3 = FUN_02d8720c(lVar3);
        uVar2 = *(ushort *)(*unaff_x22 + 0x135);
        lVar8 = *unaff_x22;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xe8);
      if ((uVar2 & 1) == 0) {
        FUN_02d8720c(lVar8);
      }
      uVar6 = thunk_FUN_02dac2f0();
      lVar8 = *unaff_x22;
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c(lVar8);
      }
      puVar7 = *(undefined8 **)(unaff_x29 + -0x88);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x28)) {
        puVar7 = (undefined8 *)*puVar7;
      }
      pcVar9 = *(code **)(lVar3 + 0x10);
      *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
      (*pcVar9)(uVar10,lVar3,uVar6,unaff_x29 + -0x20);
      if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


