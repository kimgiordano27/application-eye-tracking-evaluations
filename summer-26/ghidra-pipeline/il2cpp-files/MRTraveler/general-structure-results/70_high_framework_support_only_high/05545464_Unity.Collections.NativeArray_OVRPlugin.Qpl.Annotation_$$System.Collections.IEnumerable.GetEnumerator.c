/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 05545464
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
Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
          (long param_1)

{
  void *__src;
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int *in_x10;
  long unaff_x19;
  void *unaff_x20;
  undefined8 *unaff_x21;
  size_t unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  void *unaff_x25;
  undefined8 uVar6;
  long unaff_x26;
  int iVar7;
  undefined8 *unaff_x27;
  long unaff_x29;
  
code_r0x05545464:
  lVar3 = param_1 + (long)(*in_x10 + 3) * 0x10 + 0x138;
  do {
    *(undefined8 **)(unaff_x29 + -0x78) = unaff_x27;
    lVar3 = *(long *)(lVar3 + 8);
    (**(code **)(lVar3 + 0x10))
              (*(undefined8 *)(lVar3 + 8),lVar3,unaff_x24,unaff_x29 + -0x78,unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
      (*(code *)puVar4[2])(*puVar4,puVar4,unaff_x29 + -0x50,0,unaff_x29 + -0x78);
      uVar6 = *(undefined8 *)(unaff_x29 + -0x78);
      iVar7 = 4;
LAB_055454d8:
      FUN_04ac1c5c(unaff_x29 + -0x40,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
      if ((iVar7 == 5) || (iVar7 == 0)) {
        if ((unaff_x23 & 1) != 0) {
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0x28)) {
            unaff_x20 = (void *)(unaff_x29 + -0x18);
          }
          memcpy(unaff_x21,unaff_x20,unaff_x22);
          uVar6 = thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
          uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e84e18);
          uVar6 = FUN_06f6be0c(uVar2,uVar6,0);
          thunk_FUN_03ce5214(PTR_DAT_08e71970);
          uVar2 = thunk_FUN_03cf5234();
          FUN_07100530(uVar2,uVar6,0);
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar2);
        }
        uVar6 = 0;
      }
      if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar6;
    }
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78))
                      (unaff_x29 + -0x40);
    if ((uVar1 & 1) == 0) {
      uVar6 = 0;
      iVar7 = 5;
      goto LAB_055454d8;
    }
    puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
    (*(code *)puVar4[2])(*puVar4,puVar4,unaff_x29 + -0x40,0,unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x70);
    puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
    (*(code *)puVar4[2])(*puVar4,puVar4,unaff_x29 + -0x50,0,unaff_x29 + -0x78);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    unaff_x24 = *(long **)(unaff_x29 + -0x78);
    __src = unaff_x20;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0x28)) {
      __src = unaff_x25;
    }
    memcpy(unaff_x21,__src,unaff_x22);
    if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar5 = *(long *)(lVar3 + 0xc0);
    lVar3 = *(long *)(lVar5 + 0x58);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244(lVar3);
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    unaff_x27 = unaff_x21;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x18) + 0x28)) {
      unaff_x27 = (undefined8 *)*unaff_x21;
    }
    param_1 = *unaff_x24;
    uVar1 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar1 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == lVar3) goto code_r0x05545464;
        uVar1 = uVar1 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar1 != 0);
    }
    lVar3 = FUN_03cf1348(unaff_x24,lVar3,3);
  } while( true );
}


