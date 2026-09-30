/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsReflectionUtility$$GetInterface
ENTRY_POINT: 03ea791c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsReflectionUtility__GetInterface(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  bool in_ZR;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint in_w9;
  long unaff_x19;
  long *unaff_x20;
  
  if (in_ZR) {
    uVar6 = (**(code **)(*unaff_x20 + 0x218))();
    puVar7 = (undefined8 *)PTR_DAT_0457b768;
LAB_03ea7bf4:
    FUN_03405678(*puVar7,uVar6,0);
    return;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_0457b6e8 + 0x130);
  if ((bVar1 <= in_w9) &&
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0457b6e8)) {
    uVar6 = (**(code **)(*unaff_x20 + 0x218))();
    puVar7 = (undefined8 *)PTR_DAT_0457b718;
    goto LAB_03ea7bf4;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_0457b700 + 0x130);
  if ((in_w9 < bVar1) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0457b700)) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0457b6f8 + 0x130);
    if ((in_w9 < bVar1) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0457b6f8)) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0457b6f0 + 0x130);
      if ((in_w9 < bVar1) ||
         (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0457b6f0))
      {
        return;
      }
      lVar5 = FUN_01f08890(*(undefined8 *)
                            Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                           ,5);
      if (lVar5 == 0) goto LAB_03ea7fc8;
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_0457b720;
        thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x20));
        if (1 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(unaff_x19 + 0xc0);
          thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28));
          if (2 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_0457b710;
            thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x30));
            if (3 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(unaff_x19 + 200);
              thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x38));
              if (4 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_0457b748;
                thunk_FUN_01f51358();
                FUN_0340efe8(lVar5,0);
                return;
              }
            }
          }
        }
      }
      goto LAB_03ea7fcc;
    }
  }
  plVar3 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                ,4);
  puVar2 = PTR_DAT_0457b750;
  if (plVar3 == (long *)0x0) {
LAB_03ea7fc8:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)PTR_DAT_0457b750 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b750,*(undefined8 *)(*plVar3 + 0x40));
    if (lVar5 == 0) goto LAB_03ea7fd0;
    lVar5 = *(long *)puVar2;
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar5;
    thunk_FUN_01f51358();
    lVar5 = (**(code **)(*unaff_x20 + 0x218))();
    if ((lVar5 != 0) &&
       (lVar4 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_03ea7fd0:
      uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar6,0);
    }
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar5;
      thunk_FUN_01f51358(plVar3 + 5,lVar5);
      puVar2 = PTR_DAT_0457b738;
      if (*(long *)PTR_DAT_0457b738 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b738,*(undefined8 *)(*plVar3 + 0x40));
        if (lVar5 == 0) goto LAB_03ea7fd0;
        lVar5 = *(long *)puVar2;
      }
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar5;
        thunk_FUN_01f51358();
        lVar5 = *(long *)(unaff_x19 + 0xc0);
        if ((lVar5 != 0) &&
           (lVar4 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
        goto LAB_03ea7fd0;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar5;
          thunk_FUN_01f51358(plVar3 + 7,lVar5);
          FUN_0340ec80(plVar3,0);
          return;
        }
      }
    }
  }
LAB_03ea7fcc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


