/*
FUNCTION_NAME: Sirenix.OdinInspector.ShowOdinSerializedPropertiesInInspectorAttribute$$.ctor
ENTRY_POINT: 037ce978
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Sirenix_OdinInspector_ShowOdinSerializedPropertiesInInspectorAttribute___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *(undefined1 *)(unaff_x19 + 0x471) = 1;
  lVar4 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x20,0x1b);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (((((((uVar1 == 0) || (*(undefined4 *)(lVar4 + 0x20) = 0x10004, uVar1 == 1)) ||
           (*(undefined4 *)(lVar4 + 0x24) = 0x20004, uVar1 < 3)) ||
          ((*(undefined4 *)(lVar4 + 0x28) = 0x30004, uVar1 == 3 ||
           (*(undefined4 *)(lVar4 + 0x2c) = 0x40004, uVar1 < 5)))) ||
         (*(undefined4 *)(lVar4 + 0x30) = 0x50004, uVar1 == 5)) ||
        (((((*(undefined4 *)(lVar4 + 0x34) = 0x60005, uVar1 < 7 ||
            (*(undefined4 *)(lVar4 + 0x38) = 0x70005, uVar1 == 7)) ||
           ((*(undefined4 *)(lVar4 + 0x3c) = 0x80004, uVar1 < 9 ||
            (((*(undefined4 *)(lVar4 + 0x40) = 0x90007, uVar1 == 9 ||
              (*(undefined4 *)(lVar4 + 0x44) = 0xa0003, uVar1 < 0xb)) ||
             (*(undefined4 *)(lVar4 + 0x48) = 0xffffffff, uVar1 == 0xb)))))) ||
          (((*(undefined4 *)(lVar4 + 0x4c) = 0x140003, uVar1 < 0xd ||
            (*(undefined4 *)(lVar4 + 0x50) = 0x1e0003, uVar1 == 0xd)) ||
           ((*(undefined4 *)(lVar4 + 0x54) = 0xffffffff, uVar1 < 0xf ||
            ((((*(undefined4 *)(lVar4 + 0x58) = 0x280003, uVar1 == 0xf ||
               (*(undefined4 *)(lVar4 + 0x5c) = 0xffffffff, uVar1 < 0x11)) ||
              ((*(undefined4 *)(lVar4 + 0x60) = 0x320003, uVar1 == 0x11 ||
               (((*(undefined4 *)(lVar4 + 100) = 0x3c0003, uVar1 < 0x13 ||
                 (*(undefined4 *)(lVar4 + 0x68) = 0x460003, uVar1 == 0x13)) ||
                (*(undefined4 *)(lVar4 + 0x6c) = 0xffffffff, uVar1 < 0x15)))))) ||
             ((*(undefined4 *)(lVar4 + 0x70) = 0x500003, uVar1 == 0x15 ||
              (*(undefined4 *)(lVar4 + 0x74) = 0xffffffff, uVar1 < 0x17)))))))))) ||
         (*(undefined4 *)(lVar4 + 0x78) = 0x5a0003, uVar1 == 0x17)))) ||
       (((*(undefined4 *)(lVar4 + 0x7c) = 0x640002, uVar1 < 0x19 ||
         (*(undefined4 *)(lVar4 + 0x80) = 0xc80001, uVar1 == 0x19)) ||
        (*(undefined4 *)(lVar4 + 0x84) = 0x12c0001, puVar2 = PTR_DAT_04695830, uVar1 < 0x1b)))) {
                    /* WARNING: Subroutine does not return */
      FUN_02061554();
    }
    *(undefined4 *)(lVar4 + 0x88) = 0x1900000;
    **(long **)(*(long *)puVar2 + 0xb8) = lVar4;
    thunk_FUN_020ccb58(*(undefined8 *)(*(long *)puVar2 + 0xb8));
    puVar3 = PTR_DAT_046958a0;
    lVar4 = **(long **)(*(long *)puVar2 + 0xb8);
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)PTR_DAT_04695898;
      *(short *)(*(long **)(*(long *)puVar2 + 0xb8) + 1) = *(short *)(lVar4 + 0x18) + 0x5cf;
      uVar5 = RootMotion_Dynamics_Muscle__get_colliders(uVar5,0xaa);
      FUN_037a6ee0(uVar5,*(undefined8 *)puVar3,0);
      puVar6 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      *puVar6 = uVar5;
      thunk_FUN_020ccb58(puVar6,uVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0206154c();
}


