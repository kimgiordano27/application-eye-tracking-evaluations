/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 055453b8
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
Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
          (code *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  void *__src;
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  void *unaff_x20;
  undefined8 *unaff_x21;
  size_t unaff_x22;
  ulong unaff_x23;
  long *plVar5;
  void *unaff_x25;
  undefined8 uVar6;
  long unaff_x26;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x29;
  
  do {
    (*param_1)(param_2,param_3,param_4,0,unaff_x29 + -0x78);
    lVar8 = *(long *)(unaff_x19 + 0x20);
    plVar5 = *(long **)(unaff_x29 + -0x78);
    __src = unaff_x20;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x18) + 0x28)) {
      __src = unaff_x25;
    }
    memcpy(unaff_x21,__src,unaff_x22);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar2 = *(long *)(lVar8 + 0xc0);
    lVar8 = *(long *)(lVar2 + 0x58);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244(lVar8);
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    puVar9 = unaff_x21;
    if (-1 < *(int *)(*(long *)(lVar2 + 0x18) + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x21;
    }
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar8) {
          lVar8 = lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138;
          goto LAB_05545474;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    lVar8 = FUN_03cf1348(plVar5,lVar8,3);
LAB_05545474:
    *(undefined8 **)(unaff_x29 + -0x78) = puVar9;
    lVar8 = *(long *)(lVar8 + 8);
    (**(code **)(lVar8 + 0x10))
              (*(undefined8 *)(lVar8 + 8),lVar8,plVar5,unaff_x29 + -0x78,unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      puVar9 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
      (*(code *)puVar9[2])(*puVar9,puVar9,unaff_x29 + -0x50,0,unaff_x29 + -0x78);
      uVar6 = *(undefined8 *)(unaff_x29 + -0x78);
      iVar7 = 4;
      goto LAB_055454d8;
    }
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78))
                      (unaff_x29 + -0x40);
    if ((uVar3 & 1) == 0) {
      uVar6 = 0;
      iVar7 = 5;
LAB_055454d8:
      FUN_04ac1c5c(unaff_x29 + -0x40,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
      if ((iVar7 == 5) || (iVar7 == 0)) {
        if ((unaff_x23 & 1) != 0) {
          lVar8 = *(long *)(unaff_x19 + 0x20);
          if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x18) + 0x28)) {
            unaff_x20 = (void *)(unaff_x29 + -0x18);
          }
          memcpy(unaff_x21,unaff_x20,unaff_x22);
          uVar6 = thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18));
          uVar1 = thunk_FUN_03ce5214(PTR_DAT_08e84e18);
          uVar6 = FUN_06f6be0c(uVar1,uVar6,0);
          thunk_FUN_03ce5214(PTR_DAT_08e71970);
          uVar1 = thunk_FUN_03cf5234();
          FUN_07100530(uVar1,uVar6,0);
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar1);
        }
        uVar6 = 0;
      }
      if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar6;
    }
    puVar9 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
    (*(code *)puVar9[2])(*puVar9,puVar9,unaff_x29 + -0x40,0,unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x70);
    param_3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
    param_2 = *param_3;
    param_1 = (code *)param_3[2];
    param_4 = unaff_x29 + -0x50;
  } while( true );
}


