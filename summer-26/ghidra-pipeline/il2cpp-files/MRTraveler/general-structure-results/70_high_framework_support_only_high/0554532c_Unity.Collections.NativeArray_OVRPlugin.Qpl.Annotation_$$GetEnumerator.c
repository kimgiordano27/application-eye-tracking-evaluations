/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$GetEnumerator
ENTRY_POINT: 0554532c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05545540) */

undefined8
Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  void *__src;
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  void *unaff_x20;
  undefined8 *unaff_x21;
  size_t unaff_x22;
  ulong unaff_x23;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x26;
  int iVar8;
  long lVar9;
  long unaff_x29;
  
  (*(code *)param_2[2])(*param_2,param_2,param_3,0,unaff_x29 + -0x78);
  *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x70);
  *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x78);
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x60);
  *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x68);
  *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x58);
  do {
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78))
                      (unaff_x29 + -0x40);
    if ((uVar1 & 1) == 0) {
      uVar7 = 0;
      iVar8 = 5;
      goto LAB_055454d8;
    }
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
    (*(code *)puVar3[2])(*puVar3,puVar3,unaff_x29 + -0x40,0,unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x70);
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
    (*(code *)puVar3[2])(*puVar3,puVar3,unaff_x29 + -0x50,0,unaff_x29 + -0x78);
    lVar9 = *(long *)(unaff_x19 + 0x20);
    plVar6 = *(long **)(unaff_x29 + -0x78);
    __src = unaff_x20;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x18) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x18);
    }
    memcpy(unaff_x21,__src,unaff_x22);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = *(long *)(lVar9 + 0xc0);
    lVar9 = *(long *)(lVar4 + 0x58);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03cf1244(lVar9);
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    puVar3 = unaff_x21;
    if (-1 < *(int *)(*(long *)(lVar4 + 0x18) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x21;
    }
    lVar4 = *plVar6;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar9) {
          lVar9 = lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138;
          goto LAB_05545474;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    lVar9 = FUN_03cf1348(plVar6,lVar9,3);
LAB_05545474:
    *(undefined8 **)(unaff_x29 + -0x78) = puVar3;
    lVar9 = *(long *)(lVar9 + 8);
    (**(code **)(lVar9 + 0x10))
              (*(undefined8 *)(lVar9 + 8),lVar9,plVar6,unaff_x29 + -0x78,unaff_x29 + -0xc);
  } while (*(char *)(unaff_x29 + -0xc) == '\0');
  puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  (*(code *)puVar3[2])(*puVar3,puVar3,unaff_x29 + -0x50,0,unaff_x29 + -0x78);
  uVar7 = *(undefined8 *)(unaff_x29 + -0x78);
  iVar8 = 4;
LAB_055454d8:
  FUN_04ac1c5c(unaff_x29 + -0x40,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
  if ((iVar8 == 5) || (iVar8 == 0)) {
    if ((unaff_x23 & 1) != 0) {
      lVar9 = *(long *)(unaff_x19 + 0x20);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x18) + 0x28)) {
        unaff_x20 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(unaff_x21,unaff_x20,unaff_x22);
      uVar7 = thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18));
      uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e84e18);
      uVar7 = FUN_06f6be0c(uVar2,uVar7,0);
      thunk_FUN_03ce5214(PTR_DAT_08e71970);
      uVar2 = thunk_FUN_03cf5234();
      FUN_07100530(uVar2,uVar7,0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar2);
    }
    uVar7 = 0;
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}


