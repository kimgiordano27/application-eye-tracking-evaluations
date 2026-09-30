/*
FUNCTION_NAME: OVRPlugin$$GetSpaceTriangleMeshCounts
ENTRY_POINT: 01f8b7d0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin__GetSpaceTriangleMeshCounts(long param_1,long param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar7;
  
  uVar10 = (ulong)param_3;
  if ((DAT_0293dec8 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3650);
    DAT_0293dec8 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar8 = thunk_FUN_0124bba8();
    uVar9 = thunk_FUN_01279b34(PTR_DAT_027b3f90);
    FUN_01e75914(uVar8,uVar9,0);
  }
  else {
    iVar2 = FUN_01f7fe4c(param_1);
    if (iVar2 == 0) {
LAB_01f8b928:
      uVar10 = 0xffffffff;
LAB_01f8b92c:
      return uVar10 & 0xffffffff;
    }
    if (((int)param_3 < 0) || (iVar2 = FUN_01f7fe4c(param_1), iVar2 <= (int)param_3)) {
      thunk_FUN_01279b34(PTR_DAT_027b3fa8);
      uVar8 = thunk_FUN_0124bba8();
      uVar9 = thunk_FUN_01279b34(PTR_DAT_027b3fc8);
      puVar7 = PTR_DAT_027b3fd0;
    }
    else if (param_4 < 0) {
      thunk_FUN_01279b34(PTR_DAT_027b3fa8);
      uVar8 = thunk_FUN_0124bba8();
      uVar9 = thunk_FUN_01279b34(PTR_DAT_027b3fd8);
      puVar7 = PTR_DAT_027b3fe0;
    }
    else {
      if (param_4 <= (int)(param_3 + 1)) {
        iVar2 = FUN_0122b738(param_1);
        if (iVar2 != 1) {
          thunk_FUN_01279b34(PTR_DAT_027b4b00);
          uVar8 = thunk_FUN_0124bba8();
          uVar9 = thunk_FUN_01279b34(PTR_DAT_027c18a0);
          FUN_01f78d64(uVar8,uVar9);
          goto LAB_01f8ba50;
        }
        lVar3 = thunk_FUN_0124baac(param_1,*(undefined8 *)PTR_DAT_027b3650);
        iVar2 = param_3 - param_4;
        if (lVar3 == 0) {
          if (0 < param_4) {
            do {
              plVar4 = (long *)FUN_01f7feac(param_1,uVar10);
              if (plVar4 == (long *)0x0) {
                if (param_2 == 0) goto LAB_01f8b92c;
              }
              else {
                uVar5 = (**(code **)(*plVar4 + 0x138))
                                  (plVar4,param_2,*(undefined8 *)(*plVar4 + 0x140));
                if ((uVar5 & 1) != 0) goto LAB_01f8b92c;
              }
              uVar1 = (int)uVar10 - 1;
              uVar10 = (ulong)uVar1;
            } while (iVar2 < (int)uVar1);
          }
        }
        else if (param_2 == 0) {
          if (0 < param_4) {
            plVar4 = (long *)(lVar3 + (long)(int)param_3 * 8 + 0x20);
            do {
              if (*(uint *)(lVar3 + 0x18) <= (uint)uVar10) goto LAB_01f8b944;
              if (*plVar4 == 0) goto LAB_01f8b92c;
              uVar1 = (uint)uVar10 - 1;
              uVar10 = (ulong)uVar1;
              plVar4 = plVar4 + -1;
            } while (iVar2 < (int)uVar1);
          }
        }
        else if (0 < param_4) {
          do {
            if (*(uint *)(lVar3 + 0x18) <= (uint)uVar10) {
LAB_01f8b944:
                    /* WARNING: Subroutine does not return */
              FUN_01230ca8();
            }
            plVar4 = *(long **)(lVar3 + 0x20 + uVar10 * 8);
            if ((plVar4 != (long *)0x0) &&
               (uVar5 = (**(code **)(*plVar4 + 0x138))
                                  (plVar4,param_2,*(undefined8 *)(*plVar4 + 0x140)),
               (uVar5 & 1) != 0)) goto LAB_01f8b92c;
            uVar10 = uVar10 - 1;
          } while ((long)iVar2 < (long)uVar10);
        }
        goto LAB_01f8b928;
      }
      thunk_FUN_01279b34(PTR_DAT_027b3fa8);
      uVar8 = thunk_FUN_0124bba8();
      uVar9 = thunk_FUN_01279b34(PTR_DAT_027c1978);
      puVar7 = PTR_DAT_027c1980;
    }
    uVar6 = thunk_FUN_01279b34(puVar7);
    FUN_01e79c88(uVar8,uVar9,uVar6,0);
  }
LAB_01f8ba50:
  uVar9 = thunk_FUN_01279b34(PTR_DAT_027c1988);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar8,uVar9);
}


