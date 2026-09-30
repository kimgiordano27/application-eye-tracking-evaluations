/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03034870
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Qpl_Annotation_Builder_Entry>
          (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long in_x9;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 4) * 0x10 + 0x138);
      goto LAB_03034894;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_03034894:
  uVar3 = (*(code *)*puVar2)();
  lVar6 = *unaff_x25;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar6);
    lVar6 = *unaff_x25;
  }
  puVar1 = PTR_DAT_065cd418;
  lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar9 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar6);
      lVar6 = *unaff_x25;
    }
    uVar10 = **(undefined8 **)(lVar6 + 0xb8);
    lVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cd400);
    FUN_04a5632c(lVar9,uVar10,*(undefined8 *)PTR_DAT_065d9ba0,0);
    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 8) = lVar9;
  }
  uVar4 = FUN_034889e8(uVar3,lVar9,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_065c8c40;
  if ((uVar4 & 1) == 0) {
    uVar3 = *(undefined8 *)(unaff_x23 + 0x88);
    if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar4 = FUN_05ef59b8(uVar3,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(unaff_x23 + 0x88) == 0) goto LAB_03034bf4;
      uVar4 = FUN_03056860(*(long *)(unaff_x23 + 0x88),0);
      if ((uVar4 & 1) == 0) {
        *(undefined1 *)(unaff_x23 + 0x90) = 0;
        puVar1 = PTR_DAT_065ca5d0;
        lVar6 = *(long *)PTR_DAT_065ca5d0;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
          lVar6 = *(long *)puVar1;
        }
        uVar5 = 2;
        goto FUN_03034bc8;
      }
    }
    uVar3 = *(undefined8 *)(unaff_x23 + 0x80);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar4 = FUN_05ef739c(uVar3,0,0);
    puVar1 = PTR_DAT_065ca5d0;
    if (((uVar4 & 1) == 0) && (*(char *)(unaff_x23 + 0x90) != '\0')) {
      plVar8 = *(long **)(unaff_x23 + 0x38);
      if (plVar8 != (long *)0x0) {
        lVar6 = *plVar8;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065cc118) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto 
              System_Array__InternalArray__ICollection_Remove<OVRTask_Callback<ValueTuple<Int32Enum,_int>>>
              ;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065cc118,0);
System_Array__InternalArray__ICollection_Remove<OVRTask_Callback<ValueTuple<Int32Enum,_int>>>:
        lVar6 = (*(code *)*puVar2)(plVar8,0,puVar2[1]);
        *(long *)(unaff_x19 + 0x28) = lVar6;
        *(long *)(unaff_x23 + 0x88) = lVar6;
        if (lVar6 != 0) {
          lVar6 = FUN_05ef2cb4(lVar6,0);
          if ((*(long *)(unaff_x23 + 0x80) != 0) &&
             (FUN_02e7d690(*(long *)(unaff_x23 + 0x80),0), lVar6 != 0)) {
            FUN_05f019b0(lVar6,0);
            lVar6 = *(long *)(unaff_x19 + 0x28);
            if (lVar6 != 0) {
              *(undefined8 *)(lVar6 + 0x120) = *(undefined8 *)(unaff_x23 + 0x80);
              plVar8 = *(long **)(unaff_x23 + 0x30);
              if (plVar8 != (long *)0x0) {
                lVar9 = *plVar8;
                uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar4 != 0) {
                  piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == *unaff_x24) {
                      puVar2 = (undefined8 *)(lVar9 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                      goto LAB_03034b30;
                    }
                    uVar4 = uVar4 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar4 != 0);
                }
                puVar2 = (undefined8 *)FUN_02ce0a7c(plVar8,*unaff_x24,2);
LAB_03034b30:
                (*(code *)*puVar2)(plVar8,lVar6,puVar2[1]);
                uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
                if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
                  thunk_FUN_02cd038c();
                }
                uVar4 = FUN_05ef59b8(uVar3,0,0);
                if ((uVar4 & 1) != 0) {
                  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_03034bf4;
                  uVar4 = FUN_030567e0(*(long *)(unaff_x19 + 0x28),0);
                  puVar1 = PTR_DAT_065ca5d0;
                  if ((uVar4 & 1) != 0) {
                    lVar6 = *(long *)PTR_DAT_065ca5d0;
                    if (*(int *)(lVar6 + 0xe0) == 0) {
                      thunk_FUN_02cd038c();
                      lVar6 = *(long *)puVar1;
                    }
                    uVar5 = 4;
                    goto FUN_03034bc8;
                  }
                }
                puVar1 = PTR_DAT_065ca5d0;
                lVar6 = *(long *)PTR_DAT_065ca5d0;
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_02cd038c();
                  lVar6 = *(long *)puVar1;
                }
                uVar5 = 5;
                goto FUN_03034bc8;
              }
            }
          }
        }
      }
LAB_03034bf4:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = *(long *)PTR_DAT_065ca5d0;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar6 = *(long *)puVar1;
    }
    uVar5 = 3;
  }
  else {
    *(undefined1 *)(unaff_x23 + 0x90) = 0;
    puVar1 = PTR_DAT_065ca5d0;
    lVar6 = *(long *)PTR_DAT_065ca5d0;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar6 = *(long *)puVar1;
    }
    uVar5 = 1;
  }
FUN_03034bc8:
  uVar3 = **(undefined8 **)(lVar6 + 0xb8);
  *(undefined4 *)(unaff_x19 + 0x10) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
  return 1;
}


